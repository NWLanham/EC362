	movi	r4, f1
	jalr	r3, r4
	movi	r14, f2
	jalr	r15, r14
	halt
f1:	nop
	jalr	r0, r3
	halt
	nop
f2: movi	r1, 0x600d
	movi	r2, 0x600d
	movi	r3, 0x600d
	movi	r4, 0x600d
	jalr	r0, r15
	movi	r1, 0xdead
	movi	r2, 0xbeef
	movi	r3, 0xf00d
	halt
