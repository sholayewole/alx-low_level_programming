section .data
    msg db 'Hello, World',0Ah
    len equ $-msg

section .text
    global _start

_start:
    mov rax, 1          ; system call for write
    mov rdi, 1          ; file descriptor for stdout
    mov rsi, msg        ; address of the message
    mov rdx, len        ; message length
    syscall             ; invoke the write system call

    mov rax, 60         ; system call for exit
    xor rdi, rdi        ; exit status 0
    syscall             ; invoke the exit system call

