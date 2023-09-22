section .data
    format db "%s", 10, 0
    name db "Hello, Holberton", 0

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
