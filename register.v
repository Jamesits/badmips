`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: James Swineson
// 
// Create Date:    16:36:19 06/03/2016 
// Design Name:    mips-register
// Module Name:    register 
// Project Name:   exp8-r-instruction
// Target Devices: Nexys 3
// Tool versions: 
// Description: This is an 2-read / 1-write register. 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module register(
    input [4:0] R_Addr_A,
    input [4:0] R_Addr_B,
    input [4:0] W_Addr,
    input [31:0] W_Data,
    output reg [31:0] R_Data_A,
    output reg [31:0] R_Data_B,
    input CLK,
    input RST,
    input WE
    );

// register
reg [31:0] r [0:31];

integer i;
always @ (posedge RST or posedge CLK)
begin
	if (RST) begin
		for (i = 0; i < 32; i = i + 1)
			r[i] <= 0;
	end else begin
		if (WE && W_Addr) r[W_Addr] <= W_Data;
		else begin
			R_Data_A <= r[R_Addr_A];
			R_Data_B <= r[R_Addr_B];
		end
	end
end

endmodule
