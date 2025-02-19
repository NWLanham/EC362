add	r1, r2, r3
nand r4, r5, r6
jalr r7, r8
addi r10, r11, -1
addi r12, r13, -4
addi r14, r15, 3
addi r1, r1, 1
lw	r1, r2, 4
lw	r1, r2, -4
sw	r3, r4, 5
sw	r3, r4, -5
halt
.fill 10
.fill 0xcafe
nop
bez r4, -1
bez r5, 1
bez r6, -100
bez r7, 100
addi.l r1, r15, 0x600d
movi r2, 0xbeef
and r5, r6, r7
sub r5, r6, r7
or r5, r6, r7
mov r14, r15
