`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    21:17:08 11/23/2020 
// Design Name: 
// Module Name:    ceasar_decryption 
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
module ceasar_decryption#(
				parameter D_WIDTH = 8,
				parameter KEY_WIDTH = 16
			)(
			// Clock and reset interface
			input clk,
			input rst_n,
			
			// Input interface
			input[D_WIDTH - 1:0] data_i,
			input valid_i,
			
			// Decryption Key
			input[KEY_WIDTH - 1 : 0] key,
			
			// Output interface
			output reg busy,
			output reg[D_WIDTH - 1:0] data_o,
			output reg valid_o
    );

// TODO: Implement Caesar Decryption here

always @(posedge clk) begin
	data_o <= 0;
	valid_o <= 0;
	busy <= 0;
	
	if( rst_n == 0)
	begin
		data_o <= 0;
		valid_o <= 0;
		busy <= 0;
	end
	if (valid_i == 1)
	begin
		data_o <= data_i - key;
		valid_o <= 1;
	/*	if( (data_i - key) < 65 )
		begin
			data_o <= 90 - ( 65 - (data_i - key) - 1);
			valid_o <= 1;
			busy <= 0;	
		end
		else 
		begin
			data_o <= data_i - key;
			valid_o <= 1;
			busy <= 0;
		end
		if ( data_i < 65 || (data_i > 90 && data_i < 127))
		begin
			data_o <= data_i - key;
			valid_o <= 1;
			busy <= 0;
		end*/
	end
end

endmodule
