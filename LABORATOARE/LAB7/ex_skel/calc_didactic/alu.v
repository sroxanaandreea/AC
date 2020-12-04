`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer:
//
// Create Date:    19:42:47 11/26/2011
// Design Name:
// Module Name:    alu
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
module alu(
        oe,
        opcode,
        in1,
        in2,
        carry,
        out,
        flags
    );

parameter width = 16;
parameter flags_width = 5;

input                       oe;
input [3:0]                 opcode;
input [width-1 : 0]         in1;
input [width-1 : 0]         in2;
input                       carry;
output[width-1 : 0]         out;
output[flags_width-1 : 0]   flags;  // P, S, Z, O, C

`define ADC 0
`define SBB1 1
`define SBB2 2
`define NOT 3
`define AND 4
`define OR 5
`define XOR 6
`define SHL 7
`define SHR 8
`define SAR 9

reg [width-1 : 0]           result;
reg								 p, s, z, o, c;

always@(*) begin
	case(opcode)
		`ADC: begin
			{c, results} = in1 + in2 + carry;
			 o = ( in1[width-1] == in2[width-1] && (in1[width-1] != results[width-1] );
		end
		
		`SBB1 : begin
				{c, results} = in1 - in2 - carry;
				o = ( in1[width-1] == in2[width-1] && (in1[width-1] != results[width-1] );
		end
		
		`SBB2 : begin
				{c, results} = in2 - in1 - carry;
				o = ( in1[width-1] == in2[width-1] && (in1[width-1] != results[width-1] );
		end
		
		`NOT : begin
				result = ~(in1 | in2);
				c = 0;
				o = 0;
		end
		
		`OR : begin
				result = in1 | in2;
				c = 0;
				o = 0;
		end
		
		`XOR : begin
				result = in1 ^ in2;
				c = 0;
				o = 0;
		end
		
		`SHL : begin
				result = (in1 << 1) | (in2 << 1);
				c = in1[width-1] | in2[width-1];
				o = x != result[width-1];
		end
		
		`SAR : begin
				result = (in1 >>> 1) | (in2 >>> 1);
				c = in1[0] | in2[0];
				o = 0;
		end
		
		default: begin
			result = 0;
			c = 0;
			o = 0;
		end
	endcase
	z = rezult == 0;
	s = results[width-1] ;
	p = ~^result;
end

assign out = oe ? result : 0;
assign flags = {p, s, z, o, c};

endmodule
