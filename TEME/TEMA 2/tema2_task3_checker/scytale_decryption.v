`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:24:12 11/27/2020 
// Design Name: 
// Module Name:    scytale_decryption 
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
module scytale_decryption#(
			parameter D_WIDTH = 8, 
			parameter KEY_WIDTH = 8, 
			parameter MAX_NOF_CHARS = 50,
			parameter START_DECRYPTION_TOKEN = 8'hFA
		)(
			// Clock and reset interface
			input clk,
			input rst_n,
			
			// Input interface
			input[D_WIDTH - 1:0] data_i,
			input valid_i,
			
			// Decryption Key
			input[KEY_WIDTH - 1 : 0] key_N,
			input[KEY_WIDTH - 1 : 0] key_M,
			
			// Output interface
			output reg[D_WIDTH - 1:0] data_o,
			output reg valid_o,
			
			output reg busy
    );

// TODO: Implement Scytale Decryption here
reg [7:0] a[0:50];
integer i, k, j;
reg [15:0] p;



always @(posedge clk) begin
	data_o <= 0;
	valid_o <= 0;
	busy <= 0;
	//i <= 0; 
	//j <= 0;
	p <= key_M * key_N;
	
	if( rst_n == 0)
	begin
		data_o <= 0;
		valid_o <= 0;
		busy <= 0;
	end
	
	if( data_i == START_DECRYPTION_TOKEN)
	begin
		//if( valid_i == 0 ) begin
				data_o <= a[i];
				valid_o <= 1;
				busy <= 1;
				i <= i + key_M ;
				if ( i > p) begin
					i <= j + 1;
					//i <= j;
				end
		 //end
	 end
	
	if (data_i != START_DECRYPTION_TOKEN ) begin
		if ( valid_i == 1) begin
			//if ( i< MAX_NOF_CHARS) begin
				a[i] <=  data_i;
				i <= i + 1;
				//n <= n + 1;
				busy <= 0;
				valid_o <= 0;
			//end
		end

		else begin
			i <= 0;
		end
	end
end


endmodule
