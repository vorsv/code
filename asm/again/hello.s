.global _start
.section .text
_start:
    mov $1, %rax
    mov $1, %rdi
    mov $str, %rsi
    mov $18, %rdx
    syscall

    mov $60, %rax
    mov $0, %rdi
    syscall

str:
    .asciz "why are you gay ??"
