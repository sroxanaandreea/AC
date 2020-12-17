`define REG_WIDTH         16
`define DATA_WIDTH        32

module test;

// Instantiate the Unit Under Test (UUT)
// data interface
wire[`DATA_WIDTH/4 - 1 : 0] data_in;
wire valid_in;
wire[`REG_WIDTH - 1 : 0] key;

wire[`DATA_WIDTH/4 - 1 : 0] ref_data_out, tst_data_out;
wire ref_valid_out, tst_valid_out, ref_busy, tst_busy;

ref_scytale_decryption ref(
    .clk(clk_sys),
    .rst_n(rst_n),
    .data_i(data_in),
    .valid_i(valid_in),
    .key_N(key[15:8]),
    .key_M(key[7:0]),
    .busy(ref_busy),
    .data_o(ref_data_out),
    .valid_o(ref_valid_out)
);

scytale_decryption uut(
    .clk(clk_sys),
    .rst_n(rst_n),
    .data_i(data_in),
    .valid_i(valid_in),
    .key_N(key[15:8]),
    .key_M(key[7:0]),
    .busy(tst_busy),
    .data_o(tst_data_out),
    .valid_o(tst_valid_out)
);


tester tester(1'b1, 1'b0, ref_busy, ref_data_out, ref_valid_out, tst_busy, tst_data_out, tst_valid_out, clk_sys, rst_n, data_in, valid_in, key);

endmodule

