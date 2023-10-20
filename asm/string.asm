[org 0x7c00];[memory is offset by 0x7c00]<-default

mov ah, 0x0e
mov bx, varName; to set the pointer to fist char 

print:
    mov al, [bx]
    cmp al, 0
    je exit
    int 0x10
    inc bx
    jmp print

exit:
    jmp $

varName:;label is used as variable name
        db "nigga",0

times 510-($-$$) db 0   ;Createing boot sector (comprises of 510 zeros and
db 0x55, 0xAA     