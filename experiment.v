`default_nettype none
`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: James Swineson
// 
// Create Date:    17:35:21 06/03/2016 
// Design Name: 
// Module Name:    experiment 
// Project Name:   exp8-r-instruction
// Target Devices: Nexys 3
// Tool versions: 
// Description: Top wrapper for Nexys 3 board
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module experiment(
    input wire RST,
    input wire CLK,
    input wire [2:0] SEL,
    output reg [7:0] LED,
	output wire [31:0] dbg_inst,
	output wire [31:0] dbg_a,
    output wire [31:0] dbg_b,
	output wire [2:0] dbg_op,
	output wire dbg_we,
	output wire [31:0]alu_output
    );
	
wire [31:0]ALU_OUT;
wire ALU_OF;
wire ALU_ZF;

CPU c(
	.RST(RST),
	.CLK(CLK),
	.ALU_OUT(ALU_OUT),
	.ALU_OF(ALU_OF),
	.ALU_ZF(ALU_ZF),
	.dbg_inst(dbg_inst),
	.dbg_a(dbg_a),
	.dbg_b(dbg_b),
	.dbg_op(dbg_op),
	.reg_write_enable(dbg_we),
	.alu_output(alu_output)
);

always begin
	if (SEL[0]) begin
		case (SEL[2:1])
			0: LED <= ALU_OUT[7:0];
			1: LED <= ALU_OUT[15:8];
			2: LED <= ALU_OUT[23:16];
			3: LED <= ALU_OUT[31:24];
		endcase
	end else begin
		LED[0] <= ALU_ZF;
		LED[1] <= ALU_OF;
	end
end

endmodule
