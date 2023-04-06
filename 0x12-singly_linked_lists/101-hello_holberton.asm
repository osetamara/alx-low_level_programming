section .data
    messages db "Hello, Holberton", 0
    formats db "%s\n", 0

section .text
    global main

main:
    ; prepare arguments for printf function call
    mov rdi, formats
    mov rsi, messages
    xor rax, rax

    ; call printf function
    call printf

    ; exit program
    xor rax, rax
    ret

