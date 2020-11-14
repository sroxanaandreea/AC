`timescale 1ns / 1ps

module ba_test;

	// Inputs
	wire i;
	reg clk;

	// Outputs
	wire o;

	// Instantiate the Unit Under Test (UUT)
	ba uut (
		.o(o), 
		.i(i), 
		.clk(clk)
	);

	initial begin
		// Initialize Inputs
		clk = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
	end
    
    // Generate clock
    always #10 clk = !clk;
    
    reg [0:7] is = 8'b00101101;     // inputs to cycle through
    reg [2:0] count = 3'b0;         // index to cycle through inputs
    
    // Increment index at each clock
    always @(posedge clk) count <= count + 1;
    
    // Assign input based on curent index; delay 8 timeunits to simulate asynchronous input
    assign #8 i = is[count];
      
endmodule
