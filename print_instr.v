
`define ADD     4'h0
`define ADDI    4'h1
`define NAND    4'h2

`define LW      4'h4
`define SW      4'h5
`define BEZ     4'h6
`define JALR    4'h7

`define HALTINSTRUCTION 16'h70FF

		case (cpu.op)
			`ADD :	$display("ADD  r%0d, r%0d, r%0d", cpu.rA, cpu.rB, cpu.rC);
			`ADDI :	begin if (cpu.rC != 0)
						$display("ADDI r%0d, r%0d, %0d", cpu.rA, cpu.rB, cpu.imm4_ext);
					else
						$display("ADDI.L r%0d, r%0d, %0d", cpu.rA, cpu.rB, cpu.imm16);
					end
			`NAND :	$display("AND  r%0d, r%0d, r%0d", cpu.rA, cpu.rB, cpu.rC);
			`LW	:	$display("LW   r%0d, r%0d, %0d", cpu.rA, cpu.rB, cpu.imm4_ext);
			`SW :	$display("SW   r%0d, r%0d, %0d", cpu.rA, cpu.rB, cpu.imm4_ext);
			`BEZ :	$display("BEZ  r%0d, %0d", cpu.rA, cpu.imm8_ext);
			`JALR : begin if (cpu.instr != `HALTINSTRUCTION)
						$display("JALR r%0d, r%0d", cpu.rA, cpu.rB);
					else
						$display("HALT");
					end
			default: $display("bad op - outer default");
		endcase

