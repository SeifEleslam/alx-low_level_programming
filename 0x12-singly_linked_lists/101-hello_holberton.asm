section .data
    format db "%s", 10, 0
    name db "Hello, Holberton", 0

section .text
    extern printf
    global main

main:
   push rbp

   mov rdi,fmt
   mov rsi,msg
   call printf

   pop rbp

   mov rax,0
   ret

