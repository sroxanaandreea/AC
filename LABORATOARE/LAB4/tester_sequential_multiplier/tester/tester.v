`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company:       UPB
// Engineer:      Ovidiu Moldoveanu
//
// Create Date:   11:23:41 11/01/2020
// Design Name:   tester lab4
// Module Name:   tester
// Project Name:  lab4
// Target Device: ISim
// Tool versions: 14.7
// Description:   
////////////////////////////////////////////////////////////////////////////////

module tester;

`define A_WIDTH             8  
`define B_WIDTH             4
`define STIMULUS_WIDTH      4000
`define DATA_WIDTH          12
`define CTRL_WIDTH          3

`define WAIT_RESET  10
`define DRIVE_DATA  11
`define CHECK_OUT   12
`define RESULT      13
`define WAIT_CLK    14

parameter early_exit = 0;                   // boolean; bail on first error
parameter show_output = 1;                  // boolean; show what is being tested
parameter max_errors = 32;                  // integer; maximum number of errors to show

integer results_good;                       // number of outputs computed correctly
integer results_total;                      // total number of outputs

real percentage;                            // test passed percentage
real grade;                                 // test grade
integer file;                               // results file

integer i, j;
integer state;


// Tester
reg clk;                                    // master clock
reg rst_n;

reg [`A_WIDTH + `B_WIDTH - 1 : 0] in_data;
reg [2 : 0] control_signals;

// Instantiate the Unit Under Test (UUT)
wire [`A_WIDTH + `B_WIDTH - 1 : 0] tst_out, ref_out;
wire [`A_WIDTH - 1 : 0] a;
wire [`B_WIDTH - 1 : 0] b;
wire write;
wire multiply;
wire display;

wire [(`DATA_WIDTH * `STIMULUS_WIDTH) - 1 : 0] y_list;
wire [(`CTRL_WIDTH * `STIMULUS_WIDTH) - 1 : 0] z_list;
reg  [(`DATA_WIDTH * `STIMULUS_WIDTH) - 1 : 0] data;
reg  [(`CTRL_WIDTH * `STIMULUS_WIDTH) - 1 : 0] ctrl;

reg [`A_WIDTH - 1 : 0] a_reg;
reg [`B_WIDTH - 1 : 0] b_reg;
reg write_reg;
reg multiply_reg;
reg display_reg;

sequential_multiplier uut(
    .clk(clk),
    .rst_n(rst_n),
    .a(a),
    .b(b),
    .write(write),
    .multiply(multiply),
    .display(display),
    .out(tst_out)
);

ref_sequential_multiplier ref(
    .clk(clk),
    .rst_n(rst_n),
    .a(a),      
    .b(b),
    .write(write),
    .multiply(multiply),
    .display(display),
    .out(ref_out)
);

generate_stimuls stimuls(
    .y_list(y_list),
    .z_list(z_list)
);

always #10 clk = !clk;

initial begin
    results_good = 0;
    results_total = 0;
    // initialize inputs
    clk             = 0;
    rst_n          = 0;
    a_reg           = 0;
    b_reg           = 0;
    write_reg       = 0;
    display_reg     = 0; 
    multiply_reg    = 0;
    state           = `WAIT_RESET;

    i = `STIMULUS_WIDTH;
    j = 0;
    repeat(2) @(posedge clk);
    rst_n = 1;
end

always @(posedge clk) begin
    case(state)
        `WAIT_RESET: begin
            if(rst_n === 1) begin
                state <= `DRIVE_DATA; 
            end 
        end

        `DRIVE_DATA: begin
            data = y_list << `DATA_WIDTH * (`STIMULUS_WIDTH - i);
            ctrl = z_list << `CTRL_WIDTH * (`STIMULUS_WIDTH - i);

            in_data = data[`DATA_WIDTH * `STIMULUS_WIDTH - 1 : `DATA_WIDTH * (`STIMULUS_WIDTH - 1) ];
            control_signals = ctrl[`CTRL_WIDTH * `STIMULUS_WIDTH - 1 : `CTRL_WIDTH * (`STIMULUS_WIDTH - 1) ];

            a_reg <= in_data[`A_WIDTH + `B_WIDTH - 1 -: `A_WIDTH];
            b_reg <= in_data[0 +: `B_WIDTH];
            write_reg <= control_signals[0];
            multiply_reg <= control_signals[1];
            display_reg  <= control_signals[2];

            i <= i - 1;
            j <= j + 1;

            if(display_reg === 1 && multiply_reg === 0 && write_reg === 0) begin
                state <=  (j >= `STIMULUS_WIDTH) ? `RESULT : `CHECK_OUT; 
            end
            else begin
                state <=  (j >= `STIMULUS_WIDTH) ? `RESULT : `DRIVE_DATA; 
            end 
        end

        `CHECK_OUT: begin
            results_total = results_total + 1;

            if(tst_out === ref_out) begin
                results_good = results_good + 1;

                if(show_output) begin
                    //$write(", ");
                    print_output(ref_out);
                    $write("\tok\n");
                end 
            end
            else begin                          // result is wrong
                if(show_output)
                    $write("\n");

                if(show_output || (results_total - results_good <= max_errors)) begin
                    $write("\terror: ");
                    //print_input(a, b);
                    //$write(", ");
                    print_output(tst_out);
                    $write(", expected ");
                    print_output(ref_out);
                    $write("\n");
                end
                if(!show_output && (results_total - results_good == max_errors)) begin
                    $write("\t.\n");
                    $write("\t.\n");
                    $write("\t.\n");
                end

                if(early_exit) begin            // force exit from testing loop
                    j <= `STIMULUS_WIDTH;
                end
            end

            state <=  (j >= `STIMULUS_WIDTH) ? `RESULT : `DRIVE_DATA; 
        end

        `RESULT: begin
            if(results_good == results_total)
                $write("test ok\n");

            percentage = results_good * 1.0 / results_total;
            grade = results_good * 1.0 / results_total;

            // print results
            file = $fopen("result.tester");
            $fwrite(file, "%6.2f: %0d correct out of %0d (%6.2f%% completed)\n", 10.0 * (grade - 1.0), results_good, results_total, 100.0 * percentage);
            $fclose(file);

            $finish;
        end  
    endcase
end 

always @(posedge clk) begin
    if(multiply === 1 && write === 0) begin
        fork begin
        @(posedge clk);   
        print_input(ref.a_reg_out, ref.b_reg_out);
        end
        join
    end
end

assign a        = a_reg; 
assign b        = b_reg; 
assign write    = write_reg;
assign multiply = multiply_reg;
assign display  = display_reg; 

task print_input;

input [`A_WIDTH - 1 : 0] in_1;
input [`B_WIDTH - 1 : 0] in_2;

reg [`A_WIDTH - 1 : 0] a;
reg [`B_WIDTH - 1 : 0] b;

begin
    a = in_1;
    b = in_2;
    $write("Testing: a = %d, b = %d\n", a, b);
end

endtask

task print_output;

input [`A_WIDTH + `B_WIDTH - 1 : 0] out;

reg[`A_WIDTH + `B_WIDTH - 1 : 0] a;
begin
    a = out;
    $write("Results: Product = %d", a);
end

endtask

endmodule

