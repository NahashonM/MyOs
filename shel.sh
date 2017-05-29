nasm -f elf32 ENTRY.asm -o ENTRY.o
gcc -m32 -c ENTRYPOINT.c -o ENTRYPOINT.o
ld -m elf_i386 -T link.ld -o ./Compiled/Sp1d3r_OS/boot/Sp1d3r.bin ENTRY.o ENTRYPOINT.o
qemu-system-i386 -kernel ./Compiled/Sp1d3r_OS/boot/Sp1d3r.bin
#grub-mkrescue -o Sp1d3r_OS.iso ./Compiled

read a
