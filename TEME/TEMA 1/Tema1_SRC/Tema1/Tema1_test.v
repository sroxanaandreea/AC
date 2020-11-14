`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:15:09 11/09/2020
// Design Name:   temperature_top
// Module Name:   D:/OneDrive - Universitatea Politehnica Bucuresti/ANUL III/SEMSTRUL I/AC/TEME/TEMA 1/Tema1_SRC/Tema1/Tema1_test.v
// Project Name:  Tema1
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: temperature_top
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Tema1_test;

/*
	wire [15:0] Q;
	wire [15:0] R;
	reg [15:0] N;
	reg [15:0] D;
	*/
/*	wire [7:0] coded_out_o;
	wire alert_o;
	reg [15:0] temp_Q_i;
	reg [15:0] temp_R_i;
	reg [7:0] active_sensors_nr;
	
output_display out(
	coded_out_o,
	alert_o,
	temp_Q_i,
	temp_R_i,
	active_sensors_nr);*/
	// Inputs
	reg [39:0] sensors_data_i;
	reg [4:0] sensors_en_i;

	// Outputs
	wire [7:0] led_output_o;
	wire alert_o;
	
	/*wire [15:0] temp_sum_o;
	wire [7:0] nr_active_sensors_o;
*/
/*division d(
	Q,
	R,
	N,
	D 
	);*/

	// Instantiate the Unit Under Test (UUT)
	temperature_top uut (
		.led_output_o(led_output_o), 
		.alert_o(alert_o), 
		.sensors_data_i(sensors_data_i), 
		.sensors_en_i(sensors_en_i)
	);


/*sensors_input test(
	   .temp_sum_o(temp_sum_o),
	   .nr_active_sensors_o(nr_active_sensors_o),
	   .sensors_data_i(sensors_data_i), 
		.sensors_en_i(sensors_en_i)
    );
*/


	initial begin
		// Initialize Inputs
		/*N = 0;
		D = 0;*/
		sensors_data_i = 0;
		sensors_en_i =0;

		// Wait 100 ns for global reset to finish
		#100;
		
		sensors_data_i = 40'b00010011_00010010_00010101_00011001_00010100;
		sensors_en_i = 5'b11101;

		// Add stimulus here

	end
      
endmodule

