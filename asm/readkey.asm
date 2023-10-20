;read key strokes  set high to 0 and use interruppt 0x16(read keystrokes)
[org 0x7c00]

char:
    db 0; definre WORD 

mov ah, 0; ah, 0 read keys ah 0x0e prints
int 0x16
mov al, char
mov dh, 0x0e
mov dl, al
int 0x10

jmp $



times 510-($-$$) db 0   ;Createing boot sector (comprises of 510 zeros and
db 0x55, 0xAA  