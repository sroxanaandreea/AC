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
	/*always @(*) begin
		t = 0;
			case(sensors_data_i[7:0])
				8'b0000_0001 : t = t +19;
				8'b0000_0011 : t = t +20;
				8'b0000_0111 : t = t +21;
				8'b0000_1111 : t = t +22;
				8'b0001_1111 : t = t +23;
				8'b0011_1111 : t = t +24;
				8'b0111_1111 : t = t +25;
				8'b1111_1111 : t = t +26;
			endcase
			case(sensors_data_i[15:8])
				8'b0000_0001 : t = t +19;
				8'b0000_0011 : t = t +20;
				8'b0000_0111 : t = t +21;
				8'b0000_1111 : t = t +22;
				8'b0001_1111 : t = t +23;
				8'b0011_1111 : t = t +24;
				8'b0111_1111 : t = t +25;
				8'b1111_1111 : t = t +26;
			endcase
			case(sensors_data_i[23:16])
				8'b0000_0001 : t = t +19;
				8'b0000_0011 : t = t +20;
				8'b0000_0111 : t = t +21;
				8'b0000_1111 : t = t +22;
				8'b0001_1111 : t = t +23;
				8'b0011_1111 : t = t +24;
				8'b0111_1111 : t = t +25;
				8'b1111_1111 : t = t +26;
			endcase
			case(sensors_data_i[31:24])
				8'b0000_0001 : t = t +19;
				8'b0000_0011 : t = t +20;
				8'b0000_0111 : t = t +21;
				8'b0000_1111 : t = t +22;
				8'b0001_1111 : t = t +23;
				8'b0011_1111 : t = t +24;
				8'b0111_1111 : t = t +25;
				8'b1111_1111 : t = t +26;
			endcase
			case(sensors_data_i[39:32])
				8'b0000_0001 : t = t +19;
				8'b0000_0011 : t = t +20;
				8'b0000_0111 : t = t +21;
				8'b0000_1111 : t = t +22;
				8'b0001_1111 : t = t +23;
				8'b0011_1111 : t = t +24;
				8'b0111_1111 : t = t +25;
				8'b1111_1111 : t = t +26;
			endcase
	end
	*/
	//assign temp_sum_o = t;
endmodule
