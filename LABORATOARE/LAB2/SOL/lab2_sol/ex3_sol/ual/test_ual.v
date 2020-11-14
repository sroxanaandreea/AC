`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:07:41 10/28/2020
// Design Name:   ual
// Module Name:   C:/Users/Trolls/Dropbox/2020-2021/AC/lab2/lab2_sol/ex3_sol/ual/test_ual.v
// Project Name:  ual
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ual
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_ual;

	// Inputs
	reg [3:0] a;
	reg [3:0] b;
	reg sel;

	// Outputs
	wire [7:0] ual_out;

	// Instantiate the Unit Under Test (UUT)
	ual uut (
		.a(a), 
		.b(b), 
		.ual_out(ual_out), 
		.sel(sel)
	);

	initial begin
		// Initialize Inputs
		a = 0;
		b = 0;
		sel = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		a = 3;
		b = 2;
		sel = 1;
		
		#5;
		sel = 0;
		
		#5;
		a = 2;
		b = 4;
		
		#5;
		sel = 1;
		
		#5;
		b = 5;
		
		#5;
	end
      
endmodule

