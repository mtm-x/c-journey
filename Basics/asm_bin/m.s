_start: 							#label which stores the address of the instruction after this label NOTE: the address would be 0x80000000 since we mentioned in the linker script
	addi x1, x0, 2 				#there is no load instruction in riscv, so we are adding it with 0 = x0
	addi x2, x0, 5
	addi x3, x0, 0

loopfromhere:					#loopfromhere is a label stores the address of the instruction add x3, x3, x1 (i.e) we are using riscv32i each instruction is 32 bit long so this address would be 0x80000000c
	add x3, x3, x1
	addi x2, x2, -1
	bne x2, x0, loopfromhere  

j .  #jump to this address infinitly 
	
