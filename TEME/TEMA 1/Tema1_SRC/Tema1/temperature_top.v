`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:28:00 11/06/2020 
// Design Name: 
// Module Name:    temperature_top 
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
module temperature_top(
        output [7:0] led_output_o,
		  output alert_o,
		  input [39:0] sensors_data_i,
        input [4:0] sensors_en_i    
    );

wire [15:0] temp_sum_o, Q, R, Dir;
wire [7:0] nr_active_sensors_o;


sensors_input s1(temp_sum_o, nr_active_sensors_o, sensors_data_i, sensors_en_i);
assign Dir = nr_active_sensors_o;

division d1(Q, R, temp_sum_o, Dir);

output_display o1(led_output_o, alert_o, Q, R, nr_active_sensors_o);

endmodule

