		bez r0, do
one:	.fill 1
two:	.fill 2
fish:	.fill 0xf154
do:		lw	r1, r0, one
		lw	r2, r0, two
		lw	r3, r0, fish
		sw	r1, r1, one
		sw	r2, r1, two
		sw	r3, r1, 0
		halt
