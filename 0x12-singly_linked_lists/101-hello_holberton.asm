section .data
message: db "Hello, Holberton\n", 0

section .text
global _start

_start:
	mov rdi, message
	call printf
	mov rax, 60
	syscall
