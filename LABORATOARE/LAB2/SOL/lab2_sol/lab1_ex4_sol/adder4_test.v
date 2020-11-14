`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:21:07 10/09/2013
// Design Name:   adder4
// Module Name:   C:/projects/adder4/adder4_test.v
// Project Name:  adder4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: adder4
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module adder4_test;

	// Inputs
	reg [3:0] a;
	reg [3:0] b;

	// Outputs
	wire [4:0] sum;

	// Instantiate the Unit Under Test (UUT)
	adder4 uut (
		.sum(sum), 
		.a(a), 
		.b(b) 
	);

	initial begin
		// Initialize Inputs
		a = 0;
		b = 0;


		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
        a = 3;
        b = 5;

        #10;
        a = 10;
        b = 7;

        #10;
        b = 3;
        a = 8;

	end
      
endmodule