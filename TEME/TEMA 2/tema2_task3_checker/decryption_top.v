`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:12:00 11/23/2020 
// Design Name: 
// Module Name:    demux 
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

module decryption_top#(
			parameter addr_witdth = 8,
			parameter reg_width 	 = 16,
			parameter MST_DWIDTH = 32,
			parameter SYS_DWIDTH = 8
		)(
		// Clock and reset interface
		input clk_sys,
		input clk_mst,
		input rst_n,
		
		// Input interface
		input [MST_DWIDTH -1 : 0] data_i,
		input 					  valid_i,
		output busy,
		
		//output interface
		output [SYS_DWIDTH - 1 : 0] data_o,
		output      				valid_o,
		
		// Register access interface
		input[addr_witdth - 1:0] addr,
		input read,
		input write,
		input [reg_width - 1 : 0] wdata,
		output[reg_width - 1 : 0] rdata,
		output done,
		output error
		
    );
	
	// define outputurile care ca si wire  
	wire [reg_width -1:0] select;
	wire [SYS_DWIDTH - 1 : 0] data0_o,data1_o,data2_o,data0_i,data1_i,data2_i;
	wire valid0_o,valid1_o,valid2_o,busyCE,busySH,busyZZ,valid0_i,valid1_i,valid2_i;
	wire [reg_width - 1 : 0] caesar_key,scytale_key,zigzag_key;

		
	// TODO: Add and connect all Decryption blocks
	
	// apelez modulul de decriptare
	decryption_regfile df(
                // Clock and reset interface
                clk_sys, 
                rst_n,
                // Register access interface
                addr,
                read,
                write,
                wdata,
                rdata,
                done,
                error,
                // Output wires
                select,
                caesar_key,
                scytale_key,
                zigzag_key );


	// apelez demux-ul
	demux dx(clk_sys,
	           clk_mst,
	           rst_n,
	           select[1:0],
	           data_i,
	           valid_i,
	           data0_o,
	           valid0_o,
	           data1_o,
	           valid1_o,
	           data2_o,
	           valid2_o);			

	//apelez ceasar
    ceasar_decryption cr(clk_sys,
			rst_n,
			// Input interface
			data0_o,
			valid0_o,
			// Decryption Key
			caesar_key,
			// Output interface
			busyCE,
			data0_i,
			valid0_i);

	// apelez scytale	
    scytale_decryption sd(clk_sys,
			rst_n,
			
			// Input interface
			data1_o,
			valid1_o,
			
			// Decryption Key
			scytale_key[15:8],
			scytale_key[7:0],
			
			// Output interface
			data1_i,
		    valid1_i,
			
			busySH);

	// apelez zigzag	 	
    zigzag_decryption zd(clk_sys,
			 rst_n,
			// Input interface
			data2_o,
			valid2_o,
			// Decryption Key
			zigzag_key[7:0],
			// Output interface
			busyZZ,
			data2_i,
		    valid2_i);

	// apeelez modulul de mux	    
    mux mx(clk_sys,
		rst_n,
		//Select interface
		 select[1:0],
		// Output interface
		data_o,
		valid_o,
		//output interfaces
		data0_i,
		valid0_i,
		
		data1_i,
		valid1_i,
		
		data2_i,
		valid2_i);
	
	//fac sau intre busy -uri 
    assign busy = busyCE | busySH | busyZZ;

endmodule
