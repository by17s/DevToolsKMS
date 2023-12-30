#How to build my app?

**Compile your app:**
`nasm -f bin main.asm main.bin`
**Copy to iso:**
`cp main.bin iso_dir/boot/`
**Configure iso_dir/boot/grub/grub.cfg**
`module /boot/main.bin` *<- add this line between the lines "multiboot /boot/kernel.bin" and "boot"*
