`default_nettype none
`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: James Swineson
// 
// Create Date:    17:19:13 06/03/2016 
// Design Name: 
// Module Name:    opt 
// Project Name:   exp8-r-instruction
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
module opt(
    input wire [5:0] OP,
    input wire [5:0] func,
    output reg WE,
    output reg [2:0] ALU_OP
    );

always begin
	if (!OP) begin
	WE <= 1;
		case (func)
			//add
			6'b100000: ALU_OP <= 3'b100;
			6'b100010: ALU_OP <= 3'b101;
			6'b100100: ALU_OP <= 3'b000;
			6'b100101: ALU_OP <= 3'b001;
			6'b100110: ALU_OP <= 3'b010;
			6'b100111: ALU_OP <= 3'b011;
			6'b101011: ALU_OP <= 3'b110;
			6'b000100: ALU_OP <= 3'b111;
		endcase
	end
end

endmodule
