# How to build my C app?

## Compile your app:

`gcc -m32 -nostdlib -c -O0 -o main.o main.c`

## Link your code and the "stdlibc" library:

`ld -m elf_i386 -T link.ld -o obj.o main.o stdlibc.o`

## Create executable binary file

`objcopy -m binary -o obj.o program.bin`

## Copy to iso:

`cp program.bin iso_dir/boot/`

## Configure iso_dir/boot/grub/grub.cfg

`module /boot/program.bin` *<- add this line between the lines "multiboot /boot/kernel.bin" and "boot"*