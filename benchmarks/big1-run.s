		bez r0, main
i:		.fill 0
sum:	.fill 0
values:	.fill 10
		.fill 20
		.fill 30
		.fill 40
		.fill 50
		.fill 60
		.fill 70
		.fill 80
		.fill 90
		.fill 100
main:	sw		r0, r0, sum
		addi.l	r4, r0, 9
		sw		r4, r0, i
top:	lw		r2, r0, i
		lw		r1, r0, sum
		lw		r3, r2, values
		add		r1, r1, r3
		sw		r1, r0, sum
		bez		r2, out
		addi	r4, r0, 1
		sub		r2, r2, r4
		sw		r2, r0, i
		bez		r0, top
out:	halt
