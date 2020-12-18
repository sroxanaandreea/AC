`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    20:13:49 11/23/2020 
// Design Name: 
// Module Name:    decryption_regfile 
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

module decryption_regfile #(
			parameter addr_witdth = 8,
			parameter reg_width 	 = 16
		)(
			// Clock and reset interface
			input clk, 
			input rst_n,
			
			// Register access interface
			input[addr_witdth - 1:0] addr,
			input read,
			input write,
			input [reg_width -1 : 0] wdata,
			output reg [reg_width -1 : 0] rdata,
			output reg done,
			output reg error,
			
			// Output wires
			output reg[reg_width - 1 : 0] select,
			output reg[reg_width - 1 : 0] caesar_key,
			output reg[reg_width - 1 : 0] scytale_key,
			output reg[reg_width - 1 : 0] zigzag_key
    );

// TODO implementati bancul de registre.

	
	always @(posedge clk) begin
		error <= 0;
		done <= 0;
		if(rst_n == 0)
		begin
			select <= 16'h0000;
			caesar_key <= 16'h0000;
			scytale_key <= 16'hffff;
			zigzag_key <= 16'h0002;
		end
		case(addr) 
			8'h00: begin
					 if( read == 1) 
					 begin
						rdata <= select;
						done <= 1;
					 end
					 
					 if(write == 1)
					 begin
						select <= wdata[1:0];
						done <= 1;
					 end 
				    end
			
			8'h10: begin
					 if( read == 1) 
					 begin
						rdata <= caesar_key;
						done <= 1;
					 end
					 
					 if(write == 1)
					 begin
						caesar_key <= wdata;
						done <= 1;
					 end
				    end
					 
			8'h12: begin
					 if( read == 1) begin
						rdata <= scytale_key;
						done <= 1;
					 end
					 
					 if(write == 1)
					 begin
						scytale_key <= wdata;
						done <= 1;
					 end 
					 end
					 
			8'h14: begin
					 if( read == 1) begin
						rdata <= zigzag_key;
						done <= 1;
					 end
					 
					 if(write == 1)
					 begin
						zigzag_key <= wdata;
						done <= 1;
					 end 
					 end
					 
			default: begin
						error <= 1;
						done <= 1;
			         end
		endcase
		

	end

endmodule
