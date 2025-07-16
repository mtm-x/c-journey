SRC = m.s

lotus: c-asm.c c_and_asm.s 
	riscv64-unknown-elf-gcc -O0 -ggdb -nostdlib -march=rv32i -mabi=ilp32 -Wl,-Tm.ld c_and_asm.s c-asm.c  -o lotus.elf
	riscv64-unknown-elf-objcopy -O binary lotus.elf lotus.bin
assembly: c-asm.c
	riscv64-unknown-elf-gcc -O0 -ggdb -nostdlib -march=rv32i -mabi=ilp32 -Wl,-Tm.ld c-asm.c -S

assembly_wo_debug_info: c-asm.s
	riscv64-unknown-elf-gcc -O0 -nostdlib -march=rv32i -mabi=ilp32 -Wl,-Tm.ld c-asm.c -S


main.bin: $(SRC) m.ld
	riscv64-unknown-elf-gcc -O0 -ggdb -nostdlib -march=rv32i -mabi=ilp32 -Wl,-Tm.ld $(SRC) -o $(SRC).elf
	riscv64-unknown-elf-objcopy -O binary $(SRC).elf $(SRC).bin

printbinary: main.bin
	xxd -e -c 4 -g 4 $(SRC).bin

startqemu: $(SRC).elf
	qemu-system-riscv32 -S -M virt -nographic -bios none -kernel $(SRC).elf -gdb tcp::1234

connectgdb: $(SRC).elf
	gdb-multiarch $(SRC).elf -ex "target remote localhost:1234" -ex "break _start" -ex "continue" -q

clean: 
	rm *.out *.bin *.elf