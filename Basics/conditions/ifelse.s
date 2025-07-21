	.file	"ifelse.c"
	.option nopic
	.attribute arch, "rv32i2p0"
	.attribute unaligned_access, 0
	.attribute stack_align, 16
	.text
	.align	2
	.globl	main
	.type	main, @function
main:
	addi	sp,sp,-32
	sw	s0,28(sp)
	addi	s0,sp,32
	li	a5,10
	sw	a5,-20(s0)
	li	a5,3
	sw	a5,-24(s0)
	lw	a4,-20(s0)
	li	a5,10
	bne	a4,a5,.L4
	lw	a5,-24(s0)
	addi	a5,a5,100
	sw	a5,-24(s0)
	nop
.L4:
	nop
	lw	s0,28(sp)
	addi	sp,sp,32
	jr	ra
	.size	main, .-main
	.ident	"GCC: () 10.2.0"
