`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:05:50 10/28/2020 
// Design Name: 
// Module Name:    ual 
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
module ual(
    input [3:0] a,
    input [3:0] b,
    output [7:0] ual_out,
    input sel
    );

wire [4:0] sum;
wire [7:0] prod;

adder4 		ADD4 ( sum,a,b);
multiplier  MUL4 (prod,a,b);

assign ual_out = sel ? prod : {3'b0,sum};
endmodule
