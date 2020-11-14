`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:28:40 11/06/2020 
// Design Name: 
// Module Name:    sensors_input 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module sensors_input(
	output [15:0] temp_sum_o,
	output [7:0] nr_active_sensors_o,
	input [39:0] sensors_data_i,
	input [4:0] sensors_en_i
    );
	reg [7:0] n;
	reg [15:0] t;

	// In acet bloc verific fiecare bit al senzorului daca e 1. 
	// In acest caz incrementez valoarea numarului senzorilor activi cu 1
	// si adun valoarea temperaturii senzorului la suma.
	always @(*) begin
		n=0;
		t=0;
		if(sensors_en_i[0] == 1)			
		begin						
			n = n + 1;						
			t = t + sensors_data_i[7:0];	
		end
		if(sensors_en_i[1] == 1)
		begin
			n = n + 1;
			t = t + sensors_data_i[15:8];
		end
		if(sensors_en_i[2] == 1)
		begin
			n = n + 1;
			t = t + sensors_data_i[23:16];
		end
		if(sensors_en_i[3] == 1)
		begin
			n = n + 1;
			t = t + sensors_data_i[31:24];
		end
		if(sensors_en_i[4] == 1)
		begin
			n = n + 1;
			t = t + sensors_data_i[39:32];
		end
	end
	
	assign nr_active_sensors_o = n;
	assign temp_sum_o = t;
	
endmodule
