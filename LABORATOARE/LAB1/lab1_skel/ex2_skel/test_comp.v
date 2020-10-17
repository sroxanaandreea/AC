`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:22:17 10/13/2014
// Design Name:   comp1
// Module Name:   E:/work/repo-ac/resurse/lab1/ex5_sol/comp1/test_comp.v
// Project Name:  comp1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: comp1
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module test_comp;

	// Inputs
	reg a;
	reg b;

	// Outputs
	wire lt, gt, eq;

	// Instantiate the Unit Under Test (UUT)
	comp1 uut (
		.a(a), 
		.b(b), 
		.lt(lt),
		.gt(gt),
		.eq(eq)
	);

	initial begin
		// Initialize Inputs
		a = 0;
		b = 0;

		// Wait 100 ns for global reset to finish
		#100;
		a = 0;
		b = 1;
		
		#100;
      a = 1;
		b = 0;
		
		#100;
		a = 1;
		b = 1;
		
		// Add stimulus here

	end
      
endmodule

