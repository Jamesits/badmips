`default_nettype none
`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: James Swineson
//
// Create Date:   19:00:47 06/03/2016
// Design Name:   experiment
// Module Name:   /home/james/code/FPGA-mips/exp8-r-instruction/cpu_test.v
// Project Name:  exp8-r-instruction
// Target Device:  Nexys 3
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: experiment
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module cpu_test;

	// Inputs
	reg RST;
	reg CLK;
	reg [2:0] SEL;

	// Outputs
	wire [7:0] LED;
	
	wire [31:0] dbg_inst;
	wire [31:0] dbg_a, dbg_b;
	wire [2:0] dbg_op;
	wire dbg_we;
	wire [31:0] alu_output;

	// Instantiate the Unit Under Test (UUT)
	experiment uut (
		.RST(RST), 
		.CLK(CLK), 
		.SEL(SEL), 
		.LED(LED),
		.dbg_inst(dbg_inst),
		.dbg_a(dbg_a),
		.dbg_b(dbg_b),
		.dbg_op(dbg_op),
		.dbg_we(dbg_we),
		.alu_output(alu_output)
	);
	
	integer i;

	initial begin
		// Initialize Inputs
		RST = 0;
		CLK = 0;
		SEL = 0;

		// Wait 100 ns for global reset to finish
		#100;
		
		// Add stimulus here
		for (i = 0; i < 35; i = i + 1) begin
			CLK = 1;
			#100;
			CLK = 0;
			#100;
		end
		RST = 1;
		#100;
		RST = 0;
		#100;
		for (i = 0; i < 5; i = i + 1) begin
			CLK = 1;
			#100;
			CLK = 0;
			#100;
		end
		RST = 1;
		#100;
		RST = 0;
		#100;
		for (i = 0; i < 12; i = i + 1) begin
			CLK = 1;
			#100;
			CLK = 0;
			#100;
		end
	end
endmodule

