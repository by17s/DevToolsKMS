#Hello world
---

*main.asm*
```asm
bits 32

hello_world:
    mov eax, 1 ; fwrite
    mov ebx, 1 ; stdout
    mov ecx, 1 ; write_line
    mov esi, msg
    int 0x80 ;syscall
    ret

msg db "Hello, World!", 10, 0
```

###Compile
`nasm -f bin main.asm main.bin`