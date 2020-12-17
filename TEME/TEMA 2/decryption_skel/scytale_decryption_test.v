`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   18:54:06 12/07/2020
// Design Name:   scytale_decryption
// Module Name:   D:/OneDrive - Universitatea Politehnica Bucuresti/ANUL III/SEMSTRUL I/AC/TEME/TEMA 2/decryption_skel/scytale_decryption_test.v
// Project Name:  decryption_skel
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: scytale_decryption
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module scytale_decryption_test;

	// Inputs
	reg clk;
	reg rst_n;
	reg [7:0] data_i;
	reg valid_i;
	reg [7:0] key_N;
	reg [7:0] key_M;

	// Outputs
	wire [7:0] data_o;
	wire valid_o;
	wire busy;

	// Instantiate the Unit Under Test (UUT)
	scytale_decryption uut (
		.clk(clk), 
		.rst_n(rst_n), 
		.data_i(data_i), 
		.valid_i(valid_i), 
		.key_N(key_N), 
		.key_M(key_M), 
		.data_o(data_o), 
		.valid_o(valid_o), 
		.busy(busy)
	);
	always #10 clk = ~clk;
	initial begin
		// Initialize Inputs
		clk = 0;
		rst_n = 0;
		data_i = 8'h41;
		valid_i = 1;
		key_N = 4;
		key_M = 4;

		// Wait 100 ns for global reset to finish
		#20;
        
		// Add stimulus here
		data_i = 8'h52;
		
		#20;
		data_i = 8'h52;
		
		#20;
		data_i = 8'h50;
		
		#20
		data_i = 8'h4E;
		
		#20
		data_i = 8'h45;
		
		#20
		data_i = 8'h45;
		
		#20
		data_i = 8'h45;
		
		#20
		data_i = 8'h41;
		
		#20
		data_i = 8'h4D;
		
		#20
		data_i = 8'h53;
		
		#20
		data_i = 8'h52;
		
		#20
		data_i = 8'h41;
		
		#20
		data_i = 8'h45;
		
		#20
		data_i = 8'h49;
		
		#20
		data_i = 8'h45;
		
		#20
		data_i = 8'hFA;
				valid_i = 0;

		#20
		valid_i = 0;
		data_i = 0;
		
		#20  
		valid_i = 0;

	end
      
endmodule

