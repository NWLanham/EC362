//
// test module for RiSC cpu
//

module top (input clk);

	risc16	cpu(clk);

	integer i, cycle;

	initial begin
		cpu.pc = 0;
		for (i=0; i<16; i=i+1)
			cpu.rf[i] = 0;
		for (i=0; i<65536; i=i+1)
			cpu.m[i] = 0;
		$readmemh("init.dat", cpu.m);
		cycle=0;
	end

	always @ (posedge clk) begin
		cpu.rf[0] = 0;	// this is a hack

		$display("cycle %0d start -------", cycle);
		cycle = cycle+1;
		$display("pc = %0d", cpu.pc);
		$display("instr = %h", cpu.instr);

		`include "print_instr.v"

		for (i=0; i<8; i=i+1) 
			$display("rf[%0d] = %h\trf[%0d] = %h", i, cpu.rf[i], i+8, cpu.rf[i+8]);

		for (i=50; i>=0; i=i-10) 
			$display("m[%02d] = %h %h %h %h %h %h %h %h %h %h", i, cpu.m[i], cpu.m[i+1], cpu.m[i+2],
				cpu.m[i+3], cpu.m[i+4], cpu.m[i+5], cpu.m[i+6], cpu.m[i+7], cpu.m[i+8], cpu.m[i+9]);

		if (cycle > 100) $finish;

		cpu.rf[0] = 0;	// this is a hack
	end

endmodule
