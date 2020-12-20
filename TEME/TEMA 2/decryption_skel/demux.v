`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:12:00 11/23/2020 
// Design Name: 
// Module Name:    demux 
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

module demux #(
		parameter MST_DWIDTH = 32,
		parameter SYS_DWIDTH = 8
	)(
		// Clock and reset interface
		input clk_sys,
		input clk_mst,
		input rst_n,
		
		//Select interface
		input[1:0] select,
		
		// Input interface
		input [MST_DWIDTH -1  : 0]	 data_i,
		input 						 	 valid_i,
		
		//output interfaces
		output reg [SYS_DWIDTH - 1 : 0] 	data0_o,
		output reg     						valid0_o,
		
		output reg [SYS_DWIDTH - 1 : 0] 	data1_o,
		output reg     						valid1_o,
		
		output reg [SYS_DWIDTH - 1 : 0] 	data2_o,
		output reg     						valid2_o
    );
	
	parameter S0 = 2'b00;
	parameter S1 = 2'b01;
	parameter S2 = 2'b10;
	parameter S3 = 2'b11;
    reg [SYS_DWIDTH - 1 : 0] out_intermed;
    reg [1:0] select_out ;
    reg valid_out_inter;

	reg [1:0] state,nextstate;
	// TODO: Implement DEMUX logic
	always @(posedge clk_sys, posedge rst_n)
		if (rst_n)
			state <= S0;
		else 
			state <= nextstate;
		
	always@(posedge clk_mst)
	begin
		case(select)
			2'b00:begin
				if (valid_i == 1)begin
                       case (state)
                        S0:
                            begin 
                                nextstate = S1;
                                valid0_o <= 1;
                                data0_o <= data_i[31:24];
                            end
                        S1: 
                            begin 
                                nextstate = S2;
                                valid0_o <= 1;
                                data0_o <= data_i[23:16];
                            end
                        S2: 
                            begin 
                                nextstate = S3;
                                valid0_o <= 1;
                                data0_o <= data_i[15:8];
                            end
                        S3: 
                            begin 
                                nextstate = S0;
                                valid0_o <= 1;
                                data0_o <= data_i[7:0];
                            end
                        default : nextstate <= S0;
                    endcase
                   end else
                   begin
                       valid0_o <= 0; 
                   end
				end
			2'b01:begin
				if (valid_i == 1)begin
                       case (state)
                        S0:
                            begin 
                                nextstate = S1;
                                valid1_o <= 1;
                                data1_o <= data_i[31:24];
                            end
                        S1: 
                            begin 
                                nextstate = S2;
                                valid1_o <= 1;
                                data1_o <= data_i[23:16];
                            end
                        S2: 
                            begin 
                                nextstate = S3;
                                valid1_o <= 1;
                                data1_o <= data_i[15:8];
                            end
                        S3: 
                            begin 
                                nextstate = S0;
                                valid1_o <= 1;
                                data1_o <= data_i[7:0];
                            end
                        default : nextstate <= S0;
                    endcase
                   end
                   else
                   begin
                       valid1_o <= 0; 
                   end
				end
			2'b10:begin
				if (valid_i == 1)begin
                       case (state)
                        S0:
                            begin 
                                nextstate = S1;
                                valid2_o <= 1;
                                data2_o <= data_i[31:24];
                            end
                        S1: 
                            begin 
                                nextstate = S2;
                                valid2_o <= 1;
                                data2_o <= data_i[23:16];
                            end
                        S2: 
                            begin 
                                nextstate = S3;
                                valid2_o <= 1;
                                data2_o <= data_i[15:8];
                            end
                        S3: 
                            begin 
                                nextstate = S0;
                                valid2_o <= 1;
                                data2_o <= data_i[7:0];
                            end
                        default : nextstate <= S0;
                    endcase
                   end
                   else
                   begin
                       valid2_o<= 0; 
                   end
				end
		endcase
	end

endmodule
