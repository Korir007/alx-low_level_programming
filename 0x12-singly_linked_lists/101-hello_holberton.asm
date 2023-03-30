section .data
    msg db 'Hello, Holberton',0Ah ; message to be printed with new line character
    len equ $-msg               ; length of message

section .text
    global _start

_start:
    ; write the message to stdout
    mov eax, 4       ; syscall for write
    mov ebx, 1       ; file descriptor for stdout
    mov ecx, msg     ; address of message
    mov edx, len     ; length of message
    int 80h          ; call the kernel

    ; exit the program
    mov eax, 1       ; syscall for exit
    xor ebx, ebx     ; return code 0
    int 80h          ; call the kernel
