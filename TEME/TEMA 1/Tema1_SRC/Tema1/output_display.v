`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:00:25 11/07/2020 
// Design Name: 
// Module Name:    output_display 
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
module output_display(
	output [7:0] coded_out_o,
	output alert_o,
	input [15:0] temp_Q_i,
	input [15:0] temp_R_i,
	input [7:0] active_sensors_nr
    );
	
	reg a;
	reg [7:0] c,n;
	reg [15:0] cat, rest;
	

	always @(*) begin
		cat = temp_Q_i;
		rest = temp_R_i;
		n = active_sensors_nr;
		if ((n - rest) <= rest)
		begin
			cat = cat + 1;
			rest = 0;
		end
		else
		begin
			cat = cat;
			rest = 0;
		end
	end
	//assign temp_Q_i = cat;
	//assign temp_R_i = rest;
	
	always @(*) begin
			case(cat)
				19 : c = 8'b0000_0001;
				20 : c = 8'b0000_0011;
				21 : c = 8'b0000_0111;
				22 : c = 8'b0000_1111;
				23 : c = 8'b0001_1111;
				24 : c = 8'b0011_1111;
				25 : c = 8'b0111_1111;
				26 : c = 8'b1111_1111;
				default c = 8'b0000_0000;
			endcase
	end
	assign coded_out_o = c;


	always @(*) begin
			case(c)
				8'b0000_0000 : a = 1;
				default a = 0;
			endcase
	end

	assign alert_o = a;
	
endmodule