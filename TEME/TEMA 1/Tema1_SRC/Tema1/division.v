`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:59:15 11/07/2020 
// Design Name: 
// Module Name:    division 
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
module division(
	output [15:0] Q,
	output [15:0] R,
	input [15:0] N,
	input [15:0] D 
	);
	
	reg [15:0] Q_o,R_o;
	integer i;
	
	always @(*) begin
		if( D == 0)
			$display("Nu se poate imparti la D");
		Q_o = 0;
		R_o = 0;
		for (i = 14; i>=0 ; i=i-1) begin
			R_o = R_o << 1;
			R_o[0] = N[i];
			if ( R_o>=D)
				begin
					R_o = R_o - D;
					Q_o[i] = 1;
				end
		end
		
	end
	
assign Q= Q_o;
assign R = R_o;
endmodule
