//
// RiSC-16 skeleton
//

`define ADD     4'h0
`define ADDI    4'h1
`define NAND    4'h2

`define LW      4'h4
`define SW      4'h5
`define BEZ     4'h6
`define JALR    4'h7

`define INSTRUCTION_OP  15:12   // opcode
`define INSTRUCTION_RA  11:8    // rA
`define INSTRUCTION_RB  7:4     // rB
`define INSTRUCTION_RC  3:0     // rC

`define HALTINSTRUCTION 16'h70FF

module risc16 (input clk);

	reg		[15:0]	rf[0:15];
	reg		[15:0]	pc;
	reg		[15:0]	m[0:65535];

	wire	[15:0]	pc1 = pc + 1;

    wire	[15:0]	instr;
    wire	[15:0]	imm16;
    wire	[15:0]	imm8_ext;
    wire	[15:0]	imm4_ext;
    wire	[3:0]	op;
    wire	[3:0]	rA;
    wire	[3:0]	rB;
    wire	[3:0]	rC;

    assign  instr = m[pc],
                          imm16 = m[pc1];

	assign	op = instr[ `INSTRUCTION_OP ],
			rA = instr[ `INSTRUCTION_RA ],
			rB = instr[ `INSTRUCTION_RB ],
			rC = instr[ `INSTRUCTION_RC ];

	assign	imm4_ext = { {12 {instr[3]}}, instr[3:0] };
	assign	imm8_ext = { {8  {instr[7]}}, instr[7:0] };

	always @(posedge clk) begin
		case (op)
                  `ADD: begin	
			rf[rA] <= rf[rB] + rf[rC];
                        pc <= pc1;
                      end
                  `ADDI: begin
                        rf[rA] <= rf[rB] + imm8_ext;
                        pc <= pc1;
                      end

                  `NAND: begin
                        rf[rA] <= ~(rf[rB] + imm8_ext);
                        pc <= pc1;
                      end
			
                   `LW: begin
                        rf[rA] <= m[rf[rB] + imm8_ext];
                        pc <= pc1;
                      end
				// your code here
                   `SW: begin 
                        m[rf[rB] + imm8_ext] <= rf[rA];
                        pc <= pc1;
                      end
				// your code here
                   `BEZ: begin 
                        if (rf[rA] == 16'b0)
                          pc <= pc + imm4_ext;
                        else
                          pc <= pc1;
                      end
				// your code here
		   `JALR: begin
                        rf[rA] <= pc1;
                        pc <= rf[rB];
                      end
				// your code here

                     default: begin
                        $display("error: op %d at PC %d", op, pc);
		        pc <= pc1;
                      end
                   endcase
                
		if (instr == `HALTINSTRUCTION) begin
			$display("HALT encountered ... exiting");
			$finish;
		end

	end

endmodule
