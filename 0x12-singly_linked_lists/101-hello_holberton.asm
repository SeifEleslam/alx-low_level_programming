section .data
message: db "Hello, Holberton\n", 10

section .text
global _start

_start:
mov rax, message
syscall
mov rax, 60
syscall
