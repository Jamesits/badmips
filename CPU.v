`default_nettype none
`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:27:02 06/03/2016 
// Design Name: 
// Module Name:    CPU 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module CPU(
    input wire CLK,
    input wire RST,
	output wire [31:0]ALU_OUT,
	output wire ALU_OF,
	output wire ALU_ZF,
	output wire [31:0] dbg_inst,
	output wire [31:0] dbg_a,
    output wire [31:0] dbg_b,
	output wire [2:0] dbg_op
    );
	
// IF
reg [31:0] PC; // only last 8 bits are used

always @(negedge CLK or posedge RST)
begin
	if (RST) PC <= 0;
	else begin
		PC <= PC + 4;
	end
end

wire [31:0]inst_code;
wire [7:0] inst_addr;

assign dbg_inst = inst_code;

assign inst_addr = PC[7:0];

inst_mem i(
	.addra(inst_addr),
	.douta(inst_code),
	.clka(CLK)
);

// ID
wire [5:0]op;
wire [4:0]rs;
wire [4:0]rt;
wire [4:0]rd;
wire [5:0]func;
wire [31:0]alu_input [0:1];
wire [31:0]alu_output;
wire reg_write_enable;

assign op = inst_code[5:0];
assign rs = inst_code[10:6];
assign rt = inst_code[15:11];
assign rd = inst_code[20:16];
assign func = inst_code[31:26];

register r(
	.R_Addr_A(rs),
	.R_Addr_B(rt),
	.W_Addr(rd),
	.R_Data_A(alu_input[0]),
	.R_Data_B(alu_input[1]),
	.W_Data(alu_output),
	.CLK(~CLK),
	.RST(RST),
	.WE(reg_write_enable)
);

// EX & MEM
wire [2:0]alu_op;
wire alu_of, alu_zf;

opt o(
	.OP(op),
	.func(func),
	.ALU_OP(alu_op),
	.WE(reg_write_enable)
);

ALU a(
	.ALU_OP(alu_op),
	.A(alu_input[0]),
	.B(alu_input[1]),
	.F(alu_output),
	.OF(alu_of),
	.ZF(alu_zf),
	.RST(RST)
);

// output
assign ALU_OUT = alu_output;
assign ALU_OF = alu_of;
assign ALU_ZF = alu_zf;

assign dbg_a = alu_input[0];
assign dbg_b = alu_input[1];
assign dbg_op = alu_op;

endmodule
