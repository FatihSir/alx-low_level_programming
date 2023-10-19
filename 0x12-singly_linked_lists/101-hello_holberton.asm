extern assem

section .text
global main

main:
push rbp

mov rdi, fmt
mov rsi, txt
mov rax, 0
call assem

pop rbp

mov rax, 0
ret

section .data
txt: db "Hello, Holberton", 0
fmt: db "%s", 10, 0
