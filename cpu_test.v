`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: James Swineson
//
// Create Date:   19:00:47 06/03/2016
// Design Name:   experiment
// Module Name:   /home/james/code/FPGA-mips/exp8-r-instruction/cpu_test.v
// Project Name:  exp8-r-instruction
// Target Device:  
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

	// Instantiate the Unit Under Test (UUT)
	experiment uut (
		.RST(RST), 
		.CLK(CLK), 
		.SEL(SEL), 
		.LED(LED)
	);

	initial begin
		// Initialize Inputs
		RST = 0;
		CLK = 0;
		SEL = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		CLK = 1;
		#100;
		CLK = 0;
		#100;
		CLK = 1;
		#100;
		CLK = 0;
		#100;
		CLK = 1;
		#100;
		CLK = 0;
		#100;
		CLK = 1;
		#100;
		CLK = 0;
		#100;

	end
      
endmodule

