	bez	r0, go
data1:	.fill	1
data2:	.fill	0x2112
data3:	.fill	0xFFFF
data4:	.fill	0

go:	addi.l	r0, r0, 0xdead
	lw	r1, r0, data1
	lw	r2, r1, data1
	lw	r3, r0, data2
	sub	r4, r2, r3
	bez	r4, equal
not_equal:
	halt
equal:
	add	r3, r1, r1
	sw	r1, r3, data2
	lw	r2, r0, data3
	lw	r3, r0, data4
	and	r3, r2, r3
	sub	r4, r1, r3
	bez	r4, good
not_good:
	halt
good:
	movi	r5, func
	jalr	r15, r5
	addi	r3, r3, -3
	bez		r3, done
not_done:
	halt
done:
	movi	r1, 0x600d
	movi	r2, 0x600d
	movi	r3, 0x600d
	movi	r4, 0x600d
	halt

func:	
	addi	r1, r0, 1
	addi	r2, r0, 2
	or		r3, r1, r2
	jalr	r0, r15
	halt	

