`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:53:30 11/26/2020 
// Design Name: 
// Module Name:    mux 
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
module mux #(
		parameter D_WIDTH = 8
	)(
		// Clock and reset interface
		input clk,
		input rst_n,
		
		//Select interface
		input[1:0] select,
		
		// Output interface
		output reg[D_WIDTH - 1 : 0] data_o,
		output reg						 valid_o,
				
		//output interfaces
		input [D_WIDTH - 1 : 0] 	data0_i,
		input   							valid0_i,
		
		input [D_WIDTH - 1 : 0] 	data1_i,
		input   							valid1_i,
		
		input [D_WIDTH - 1 : 0] 	data2_i,
		input     						valid2_i
    );
	
	//TODO: Implement MUX logic here


	always@(posedge clk)
	begin
		if (rst_n == 1)
		begin
			data_o <= 0;
			valid_o<= 0;
		end 
		else 
		begin
			case(select)
			2'b00: begin
				if (valid0_i == 1)
				begin
					data_o <= data0_i;
					valid_o<= valid0_i;
				end
				else 
				begin 
					data_o <= 0; 
					valid_o<= valid0_i;
				end
			end
			2'b01:begin
				if (valid1_i == 1)
				begin
					data_o <= data1_i;
					valid_o<= valid1_i;
				end
				else 
				begin 
					data_o <= 0; 
					valid_o<= valid1_i;
				end
			end
			2'b10:begin
				if (valid2_i == 1)
				begin
					data_o <= data2_i;
					valid_o<= valid2_i;
				end 
				else 
				begin 
					data_o <= 0; 
					valid_o<= valid2_i;
				end
			end
			default: begin
				data_o <= 0;
				valid_o<= 0;
			end
		endcase
	   end
	end

endmodule
// [7:0] , [15:8], [23:16],[31:24]