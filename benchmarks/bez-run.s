		bez	r0, next
		nop
		nop
next:	addi r2, r0, 5
		bez	r2, exit
		nop
loop:	bez r2, exit
		addi r2, r2, -1
		bez	r0, loop
		nop
		addi.l r1, r0, 0x600d
		addi.l r2, r0, 0x600d
		addi.l r3, r0, 0x600d
		addi.l r4, r0, 0x600d
exit:	halt
