bez	r0, 123
bez	r1, -123
bez	r2, 0xf00d
loop:	nop
nop
bez	r3, loop
bez r4, next
nop
nop
next: .fill 0xcafe
