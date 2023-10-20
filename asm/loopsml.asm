mov ah, 0x0e
mov al, 98 ; dec value for 'a'
int 0x10;system interrupt to print the value

loop:;label
    inc al; increase al
    cmp al, 123;compare al and 91("z" + 1)
    je exit;if true goes to exit
    int 0x10
    jmp loop
    
exit:
    jmp $
times 510-($-$$) db 0   ;Createing boot sector (comprises of 510 zeros and
db 0x55, 0xAA           ;2 byte end identifier