		bez r0, bottom
top:	.fill	123
		.fill	0x123
		.fill	top
		.fill	bottom
		nop
bottom:	nop
		halt
