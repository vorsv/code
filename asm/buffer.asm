[org 0x7c00]
mov cx, 2
mov ah, 0

input:
    mov bx, var
    getstr:
    mov ah, 0
    int 0x16
    cmp al, 12
    je newline
    mov bx, al
    inc bx
    jmp getstr

var:
    times 10 db 0

times 510-($-$$) db 0   ;Createing boot sector (comprises of 510 zeros and
db 0x55, 0xAA           ;2 byte end identifier