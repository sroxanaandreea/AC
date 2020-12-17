`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company:       UPB
// Engineer:      Ovidiu Moldoveanu
//
// Create Date:   18:23:41 11/27/2020
// Design Name:   tester tema2
// Module Name:   tester
// Project Name:  tema2
// Target Device: ISim
// Tool versions: 14.7
// Description:   tester for homework 2: Decryption
////////////////////////////////////////////////////////////////////////////////
 
`define REG_WIDTH         16
`define DATA_WIDTH        32  
`define MAX_ACCESSES    5000

module tester(
    input is_scytale,
    input is_caesar,
    input ref_busy, 
    input [`DATA_WIDTH/4 - 1 : 0] ref_data_out, 
    input ref_valid_out, 
    input tst_busy, 
    input [`DATA_WIDTH/4 - 1 : 0] tst_data_out, 
    input tst_valid_out, 
    output clk_sys, 
    output rst_n, 
    output [`DATA_WIDTH/4 - 1 : 0] data_in, 
    output valid_in, 
    output [`REG_WIDTH - 1 : 0] key
    
);

// Tester
reg clk_mst_reg;                                // master clock
reg clk_sys_reg;
reg rst_n_reg;

real percentage;                            // test passed percentage
real grade;                                 // test grade
integer file;                               // results file
integer passed_tests = 0;
integer i, j, k, index[2:0], timeout[2:0];
integer data_file;
reg mismatch;

integer nof_decryptions;

reg[`DATA_WIDTH/4 -1 : 0] input_data[`MAX_ACCESSES - 1 : 0];
reg[`REG_WIDTH - 1 : 0] key_data[`MAX_ACCESSES - 1 : 0];
reg[31:0] nof_data_in_aceess[`MAX_ACCESSES - 1 : 0];

reg[`REG_WIDTH - 1 : 0] ref_data[5000:0], tst_data[5000:0];

integer read_index;
integer data_index;
integer drive_index;
integer total_letters;

initial begin
    data_index = 0;
    total_letters = 0;
    data_file = $fopen("test.data", "r");
    if(!data_file) begin
        $write("error opening data file\n");
        $finish;
    end
    
    if($fscanf(data_file, "nof_decryptions = %d\n", nof_decryptions) != 1) begin
        $write("error reading nof_decryptions\n");
        $finish;
    end
    
    for(i = 0; i < nof_decryptions; i = i + 1) begin
        if($fscanf(data_file, "key = %d\n", key_data[i]) != 1) begin
            $write("error reading key_data for decryption number %d\n", i);
            $finish;
        end

        if($fscanf(data_file, "nof_data = %d\n", nof_data_in_aceess[i]) != 1) begin
            $write("error reading nof_data for decryption number %0d\n", i);
            $finish;
        end
        total_letters = total_letters + nof_data_in_aceess[i];

        for(j = 0; j < nof_data_in_aceess[i]; j = j + 1)
            if($fscanf(data_file, "%d\n", input_data[data_index + j]) != 1) begin
                $write("error reading input_data for decryption number %d\n", i);
                $finish;
            end
        data_index = data_index + nof_data_in_aceess[i];
    end

    if(!is_caesar)
        total_letters = total_letters - nof_decryptions;
    
    data_index = 0;
    //$write("\n-----------INPUT FILE---------\n\n");
    /*for(i = 0; i < nof_decryptions; i = i + 1) begin
        //$write("Input Data:  %d\n", input_data[i]);
        $write("Key: ");
        $write("%0d ", key_data[i]);
        $write("\n");
        $write("Input data: ");
        for(j = 0; j < nof_data_in_aceess[i]; j = j + 1)
            $write("%0s ", input_data[data_index + j]);
        $write("\n");
        data_index = data_index + nof_data_in_aceess[i];
    end
    */
    //$write("---------- END INPUT FILE--------\n");

    $fclose(data_file);

//----------------------------START OF TEST-------------------------
    // initialize inputs
    clk_mst_reg     = 0;
    clk_sys_reg     = 0;
    rst_n_reg       = 1;
    data_in_reg     = 0;
    valid_in_reg    = 0;
    key_reg         = 0;
    read_index = 0;
    
    repeat(5) @(posedge clk_sys);
    rst_n_reg = 0;
    
    repeat(2) @(posedge clk_sys);
    rst_n_reg = 1;
    
    repeat(5) @(posedge clk_sys);

    fork
        begin
            @(posedge clk_sys);         
            drive_instruction();
        end

        begin
            monitor_tst();
        end

        begin
            monitor_ref();
        end

    join
 
    repeat(10) @(posedge clk_sys);
    end_of_test_checks();

    if(passed_tests == nof_decryptions)
        $write("test ok\n");

    percentage = passed_tests * 1.0 / nof_decryptions;
    grade = passed_tests * 1.0 / nof_decryptions;

    // print results
    file = $fopen("result.tester");
    $fwrite(file, "%6.2f: %0d correct out of %0d (%6.2f%% completed)\n", 2 * (grade - 1.0), passed_tests, nof_decryptions, 100.0 * percentage);
    $fclose(file);

    $finish;
end

// Instantiate the Unit Under Test (UUT)
reg[`DATA_WIDTH - 1 : 0] data_in_reg;
reg valid_in_reg;
reg[`REG_WIDTH - 1 : 0] key_reg;


task drive_instruction();
begin
    drive_index = 0;
    for(index[0] = 0; index[0] < nof_decryptions; index[0] = index[0] + 1) begin
        @(posedge clk_sys);        
        wait_for_busy(timeout[0], 1000, index[0]);

        key_reg = key_data[index[0]];
        $write("Decryption %0d \n", index[0]);
        if(is_scytale)
            $write("Testing key_N: %0d, key_M: %0d\n", key_reg[15:8], key_reg[7:0]);
        else
            $write("Testing key: %0d\n", key_reg);
        $write("Testing data: ");
        
        for(i = 0; i < nof_data_in_aceess[index[0]] ; i = i + 1) begin
            valid_in_reg = 1;
            data_in_reg = input_data[drive_index + i];
            $write("%0s ", data_in_reg);

            @(posedge clk_sys);
            valid_in_reg = 0;
            data_in_reg = 0;

            wait_for_busy(timeout[0], 1000, index[0]);
        end 
        $write("\n");

        drive_index = drive_index + nof_data_in_aceess[index[0]];
    end  
end
endtask

task monitor_ref();
begin
    for(index[1] = 0; index[1] < total_letters; index[1] = index[1] + 1) begin
        timeout[1] = 100;
        
        while(ref_valid_out === 0)
        begin
            timeout[1] = timeout[1] - 1;
            if(timeout[1] == 0)
            begin
                $display("[TIMEOUT]Reference Valid OUT was not asserted during 100cc");
                $finish;
            end
            @(posedge clk_sys);
        end
        ref_data[index[1]] = ref_data_out;

        @(posedge clk_sys);
    end    
end
endtask

task monitor_tst();
begin
    for(index[2] = 0; index[2] < total_letters; index[2] = index[2] + 1) begin
        timeout[2] = 100;
        
        while(tst_valid_out === 0)
        begin
            timeout[2] = timeout[2] - 1;
            if(timeout[2] == 0)
            begin
                $display("[TIMEOUT]UUT Valid OUT was not asserted during 100cc");
                $finish;
            end
            @(posedge clk_sys);
        end
        
        tst_data[index[2]] = tst_data_out;

        @(posedge clk_sys);
    end    
end
endtask

task end_of_test_checks();
begin
    data_index = 0;
    for(i = 0;  i < nof_decryptions; i = i + 1) begin
    	if(!is_caesar)
    		nof_data_in_aceess[i] = nof_data_in_aceess[i] - 1;

        for(j = 0;  j < nof_data_in_aceess[i]; j = j + 1) begin
            if(ref_data[data_index + j] !== tst_data[data_index + j]) begin
                $write("[ERROR] MISMATCH for decryption %0d in position %0d.\n", i, j);
                $write("Expected Decryption: ");
                for(k = 0;  k < nof_data_in_aceess[i]; k = k + 1) begin
                    $write("%0s ", ref_data[data_index + k]);
                end
                $write("\n");
                $write("Received Decryption: ");
                for(k = 0;  k < nof_data_in_aceess[i]; k = k + 1) begin
                    $write("%0s ", tst_data[data_index + k]);
                end
                $write("\n");
                mismatch = 1;

                //force break
                j = nof_data_in_aceess[i];
            end
            else
                mismatch = 0;
        end
        data_index = data_index + nof_data_in_aceess[i];            

        if(mismatch == 0) begin
            $write("[PASSED] Decryption %0d was done correctly \n", i);
            passed_tests = passed_tests + 1;
        end       

    end
end
endtask


task wait_for_busy(input integer counter, input integer value, input integer instr_nr);
begin
    counter = value;
    while(ref_busy === 1 || tst_busy === 1) begin
        counter = counter - 1;
        if(counter == 0)
        begin
            $display("[TIMEOUT]Decryption %0d timeout after %0dcc. Busy was kept high for more than %0dcc.\n", instr_nr, value, value);
            $finish;
        end
        @(posedge clk_sys);
    end
end
endtask



always #5 clk_sys_reg = !clk_sys_reg;
always #20 clk_mst_reg = !clk_mst_reg;

assign clk_sys      = clk_sys_reg;
assign clk_mst      = clk_mst_reg;
assign rst_n        = rst_n_reg;
assign data_in      = data_in_reg;
assign valid_in     = valid_in_reg;
assign key          = key_reg;

endmodule

