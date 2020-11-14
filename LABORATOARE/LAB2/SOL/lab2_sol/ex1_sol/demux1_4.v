`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:16:24 10/19/2020 
// Design Name: 
// Module Name:    demux1_4 
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
module demux1_4(
    input in,
    input [1:0] sel,
    output out1,
    output out2,
    output out3,
    output out4
    );

	reg o1, o2, o3, o4;

	always@(*) begin
		o1 = 0;
		o2 = 0;
		o3 = 0;
		o4 = 0;
		
		case(sel)
			0: o1 = in;
			1: o2 = in;
			2: o3 = in;
			3: o4 = in;
			default: begin
				o1 = 0; o2 = 0; o3 = 0; o4 = 0;
			end
		endcase	
	end


	assign out1 = o1;
	assign out2 = o2;
	assign out3 = o3;
	assign out4 = o4;

endmodule
