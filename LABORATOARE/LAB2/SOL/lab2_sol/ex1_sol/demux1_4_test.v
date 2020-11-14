`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:17:10 10/19/2020
// Design Name:   demux1_4
// Module Name:   C:/Users/Trolls/Desktop/New folder/demux1_4/demux1_4_test.v
// Project Name:  demux1_4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: demux1_4
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module demux1_4_test;

	// Inputs
	reg in;
	reg [1:0] sel;

	// Outputs
	wire out1;
	wire out2;
	wire out3;
	wire out4;

	// Instantiate the Unit Under Test (UUT)
	demux1_4 uut (
		.in(in), 
		.sel(sel), 
		.out1(out1), 
		.out2(out2), 
		.out3(out3), 
		.out4(out4)
	);

	initial begin
		// Initialize Inputs
		in = 0;
		sel = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		in = 1;
		sel = 2;
		
		#10;
		sel = 3;
		
		#10;
		in = 0;
		
		#10;
		sel = 1;
		
		#10;
		in = 1;
	end
      
endmodule

