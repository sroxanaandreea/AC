`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:56:27 12/03/2020
// Design Name:   decryption_regfile
// Module Name:   D:/OneDrive - Universitatea Politehnica Bucuresti/ANUL III/SEMSTRUL I/AC/TEME/TEMA 2/decryption_skel/decryption_regfile_test.v
// Project Name:  decryption_skel
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: decryption_regfile
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module decryption_regfile_test;

	// Inputs
	reg clk;
	reg rst_n;
	reg [7:0] addr;
	reg read;
	reg write;
	reg [15:0] wdata;

	// Outputs
	wire [15:0] rdata;
	wire done;
	wire error;
	wire [15:0] select;
	wire [15:0] caesar_key;
	wire [15:0] scytale_key;
	wire [15:0] zigzag_key;

	// Instantiate the Unit Under Test (UUT)
	decryption_regfile uut (
		.clk(clk), 
		.rst_n(rst_n), 
		.addr(addr), 
		.read(read), 
		.write(write), 
		.wdata(wdata), 
		.rdata(rdata), 
		.done(done), 
		.error(error), 
		.select(select), 
		.caesar_key(caesar_key), 
		.scytale_key(scytale_key), 
		.zigzag_key(zigzag_key)
	);

	always #10 clk = ~clk;
	initial begin
		// Initialize Inputs
		clk = 1;
		rst_n = 1;
		addr = 0;
		read = 0;
		write = 0;
		wdata = 0;

		// Wait 100 ns for global reset to finish
		#20;
        
		// Add stimulus here
 /*  	addr = 8'h00;
		wdata = 16'h00_02;
		write = 1;
		#20;
		write = 0;
		addr = 0;   
		wdata = 0;
*/
		rst_n = 0;
		addr = 8'h10;
		wdata = 16'hbca2;
		read = 0;
		write = 1;
		#20;
		read = 0;
		write = 0;
		addr = 0;
		
		
	end
      
endmodule
