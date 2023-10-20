; program to print alternating case alphabets 
mov ah, 0x0e
mov al, 97 ; dec value for 'A'
int 0x10
mov bx, 1

loop:;label
    sub al, 31; decrease al
    int 0x10
    add al, 33; increase al
    int 0x10
    cmp bx, 12
    je exit;jump equal exit
    inc bx
    jmp loop
    
exit:
    jmp $
times 510-($-$$) db 0   ;Createing boot sector (comprises of 510 zeros and
db 0x55, 0xAA           ;2 byte end identifier