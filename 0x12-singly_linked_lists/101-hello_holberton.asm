section .data
    format db 'Hello, %s', 0
    name db 'Holberton', 0

section .text
    extern printf

global main
main:
    sub rsp, 8
    mov rdi, format
    mov rsi, name
    xor eax, eax

    call printf

    add rsp, 8
    mov eax, 60
    xor edi, edi
    syscall
