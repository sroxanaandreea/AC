`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:11:46 12/07/2020
// Design Name:   ceasar_decryption
// Module Name:   D:/OneDrive - Universitatea Politehnica Bucuresti/ANUL III/SEMSTRUL I/AC/TEME/TEMA 2/decryption_skel/ceasar_decryption_test.v
// Project Name:  decryption_skel
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ceasar_decryption
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module ceasar_decryption_test;

	// Inputs
	reg clk;
	reg rst_n;
	reg [7:0] data_i;
	reg valid_i;
	reg [15:0] key;

	// Outputs
	wire [7:0] data_o;
	wire valid_o;

	// Instantiate the Unit Under Test (UUT)
	ceasar_decryption uut (
		.clk(clk), 
		.rst_n(rst_n), 
		.data_i(data_i), 
		.valid_i(valid_i), 
		.key(key), 
		.data_o(data_o), 
		.valid_o(valid_o)
	);
	
	always #10 clk = ~clk; 
	initial begin
		// Initialize Inputs
		clk = 1;
		rst_n = 0; 
		data_i = 8'h44;
		valid_i = 1;
		key = 3;

		// Wait 100 ns for global reset to finish
		#20;
        
		// Add stimulus here
		data_i = 8'h51;
		
		#20;
		data_i = 8'h44;
		
		#20;
		data_i = 8'h41;
		
		#20
		data_i = 0;
		valid_i = 0;
	end

		
endmodule

