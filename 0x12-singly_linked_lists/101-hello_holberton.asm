section .data
   name: db "Holberton", 0
   msg: db "Hello, %s", 10, 0

section .text
   extern printf
   global main

main:
   push rbp
   mov rdi,msg
   mov rsi,name
   mov rax,0
   call printf
   pop rbp
   mov rax,0
   ret

