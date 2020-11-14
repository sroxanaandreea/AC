`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company:       UPB
// Engineer:      Dan Dragomir
//
// Create Date:   21:57:30 10/09/2013
// Design Name:   tema0
// Module Name:   C:/projects/adder6/tester/tester.v
// Project Name:  adder6 tester
// Target Device: ISim
// Tool versions: 14.6
// Description:   tester for homework 0: learning vmchecker
//
// Verilog Test Fixture created by ISE for module: adder6
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module tester;

	parameter early_exit = 0;	// boolean; bail on first error
	parameter show_output = 0;	// boolean; show what numbers are being tested
	parameter max_errors = 32;	// integer; maximum number of errors to show
	
	// Inputs
	reg [5:0] a, b;
	// Outputs
	wire [6:0] sum;
	
	// Tester
	integer i, j;
	reg [5:0] aux_a, aux_b;
	reg [6:0] aux_sum;
	integer results_ok, results_total;
	real done;
	integer file;

	// Instantiate the Unit Under Test (UUT)
	adder6 uut (
		.a(a),
		.b(b),
		.sum(sum)
	);

	initial begin
		// Initialize Inputs
		a = 0;
		b = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		results_ok = 0;
		results_total = 0;
		for(i = 0; i <= 63; i = i + 1) begin
			for(j = 0; j <= 63; j = j + 1) begin
				results_total = results_total + 1;
				aux_a = i;			// force correct width for printing
				aux_b = j;			// force correct width for printing
				aux_sum = i + j;	// force correct width for printing
				
				if(show_output)
					$write("adding: a = %d, b = %d", aux_a, aux_b);
				
				a = aux_a;
				b = aux_b;
				#1;					// needed to force update of signal sum
				if(sum == aux_sum) begin
					// result is ok
					if(show_output)
						$write(", sum = %d\tok\n", sum);
					
					results_ok = results_ok + 1;
				end
				else begin
					// result is wrong
					if(show_output)
						$write("\n");
					
					if(results_total - results_ok <= max_errors)
						$write("\terror: a = %d, b = %d, sum = %d, expected %d\n", a, b, sum, aux_sum);
					if(results_total - results_ok == max_errors) begin
						$write("\t.\n");
						$write("\t.\n");
						$write("\t.\n");
					end
					
					if(early_exit) begin
						// force exit from testing loop
						i = 63;
						j = 63;
					end
				end
			end
		end
		
		if(results_ok == results_total)
			$write("test ok\n");
		
		// percentage done
		done = results_ok * 1.0 / results_total;
		
		// print results
		file = $fopen("result.tester");
		$fwrite(file, "%4.2f: %0d correct results out of %0d (%4.2f%% completed)\n", 10.0 * (done - 1.0), results_ok, results_total, 100.0 * done);
		$fclose(file);
	end
      
endmodule
