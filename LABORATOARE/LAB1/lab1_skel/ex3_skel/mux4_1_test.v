`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   12:51:18 10/09/2013
// Design Name:   mux4_1
// Module Name:   C:/projects/mux4_1/mux4_1_test.v
// Project Name:  mux4_1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: mux4_1
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module mux4_1_test;

	// Inputs
	reg i1;
	reg i2;
	reg i3;
	reg i4;
	reg s1;
	reg s2;

	// Outputs
	wire out;

	// Instantiate the Unit Under Test (UUT)
	mux4_1 uut (
		.out(out), 
		.i1(i1), 
		.i2(i2), 
		.i3(i3), 
		.i4(i4), 
		.s1(s1), 
		.s2(s2)
	);

	initial begin
		// Initialize Inputs
		i1 = 0;
		i2 = 0;
		i3 = 0;
		i4 = 0;
		s1 = 0;
		s2 = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
        s1 = 0;
        s2 = 0;
        i1 = 1;
        #10;
        i1 = 0;
        #10;
        i2 = 1;
        #10;
        i2 = 0;
        #10;
        i3 = 1;
        #10;
        s1 = 0;
        s2 = 1;
        #10;
        s1 = 1;
        s2 = 1;
	end
      
endmodule
