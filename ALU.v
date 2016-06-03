`default_nettype none
`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:54:33 06/03/2016 
// Design Name: 
// Module Name:    ALU 
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
module ALU(
    input wire [31:0] A,
    input wire [31:0] B,
    input wire [2:0] ALU_OP,
	input wire RST,
    output reg [31:0] F,
    output reg ZF,
    output reg OF
    );

always begin
	if (RST) begin
		F = 0;
		ZF = 0;
		OF = 0;
	end else begin
		case (ALU_OP)
			//and
			0: begin F = A & B; OF = 0; end
			// or
			1: begin F = A | B; OF = 0; end
			// xor
			2: begin F = A ^ B; OF = 0; end
			// nor
			3: begin F = ~(A | B); OF = 0; end
			// add
			4: begin {OF, F} = A + B; end
			// sub
			5: begin {OF, F} = A - B; end
			// slt
			6: begin F = A < B; OF = 0; end
			// sll
			7: begin {OF, F} = B << A; end
			
			default: begin F = 0; OF = 0; end
		endcase
		ZF = F == 0 ? 1: 0;
	end
end

endmodule
