#Execute command in *uxSH*
---

*main.asm*
```asm
bits 32

system:
    mov eax, 300 ; execute string in uxSH
    mov esi, cmd
    int 0x80 ; syscall
    ret

cmd db "system meminf", 0
```

###Compile
`nasm -f bin main.asm main.bin`