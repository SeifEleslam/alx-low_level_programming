section .data
    hello db 'Hello, Holberton', 0AH ; Null-terminated string with newline character

section .text
    global main

main:
    ; Write string to stdout
    mov eax, 4
    mov ebx, 1
    mov ecx, hello
    mov edx, 16
    int 0x80

    ; Exit the program
    mov eax, 1
    xor ebx, ebx
    int 0x80
