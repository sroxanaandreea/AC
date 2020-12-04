`define ADDR_WIDTH         8  
`define REG_WIDTH         16
`define MAX_ACCESSES    1000

module test;

// Tester
reg clk_reg;                                // master clock
reg rst_n_reg;

real percentage;                            // test passed percentage
real grade;                                 // test grade
integer file;                               // results file
integer passed_tests = 0;
integer i, j, index[2:0], timeout[1:0];
integer data_file;
reg mismatch;
reg reset_done;

integer nof_accesses;

reg[8 + `ADDR_WIDTH + `REG_WIDTH - 1 : 0] input_data[`MAX_ACCESSES - 1 : 0];
reg[`REG_WIDTH - 1 : 0] ref_data[`MAX_ACCESSES:0], tst_data[`MAX_ACCESSES:0];
reg[`MAX_ACCESSES:0] transactions;
integer read_index;

initial begin
    data_file = $fopen("test.data", "r");
    if(!data_file) begin
        $write("error opening data file\n");
        $finish;
    end
    
    if($fscanf(data_file, "nof_accesses = %d\n", nof_accesses) != 1) begin
        $write("error reading nof_accesses\n");
        $finish;
    end
    
    for(i = 0; i < nof_accesses; i = i + 1) begin
        if($fscanf(data_file, "%x\n", input_data[i]) != 1) begin
            $write("error reading input_data_%d\n", i);
            $finish;
        end
    end
    
    //$write("\n-----------INPUT FILE---------\n\n");
    //for(i = 0; i < nof_accesses; i = i + 1) begin
    //    //$write("Input Data:  %x\n", input_data[i]);
    //    $write("Address = %x\n", input_data[i][`ADDR_WIDTH - 1 : 0]);
    //    $write("Commands: Read = %b, Write = %b\n", input_data[i][`REG_WIDTH + `ADDR_WIDTH], input_data[i][`REG_WIDTH + `ADDR_WIDTH + 1]);
    //    $write("Write Data = %x\n", input_data[i][`REG_WIDTH + `ADDR_WIDTH - 1 : `ADDR_WIDTH]);
    //end
    //$write("---------- END INPUT FILE--------\n");

    $fclose(data_file);

//----------------------------START OF TEST-------------------------
    // initialize inputs
    clk_reg         = 0;
    rst_n_reg       = 1;
    address_reg     = 0;
    write_data_reg  = 0;
    read_reg        = 0;
    write_reg       = 0;
    read_index      = 0;
    reset_done      = 0;
    
    repeat(5) @(posedge clk);
    rst_n_reg = 0;
    
    repeat(2) @(posedge clk);
    rst_n_reg = 1;

    @(posedge clk);    
    // enable checks for registers wires
    reset_done = 1;
    
    repeat(5) @(posedge clk);

    fork
        begin
            @(posedge clk);         
            drive_instruction();
        end

        begin
            monitor_reg_if_tst();
        end

        begin
            monitor_reg_if_ref();
        end
    join

    repeat(10) @(posedge clk);
    end_of_test_checks();

    if(passed_tests == nof_accesses)
        $write("test ok\n");

    percentage = passed_tests * 1.0 / nof_accesses;
    grade = passed_tests * 1.0 / nof_accesses;

    // print results
    file = $fopen("result.tester");
    $fwrite(file, "%6.2f: %0d correct out of %0d (%6.2f%% completed)\n", 1.5 * (grade - 1.0), passed_tests, nof_accesses, 100.0 * percentage);
    $fclose(file);

    $finish;
end

// Instantiate the Unit Under Test (UUT)
wire[`ADDR_WIDTH - 1 : 0] address;
wire[`REG_WIDTH - 1 : 0] write_data, ref_read_data, tst_read_data; 
wire[`REG_WIDTH - 1 : 0] ref_select, tst_select, ref_caesar, tst_caesar, ref_scytale, tst_scytale, ref_zigzag, tst_zigzag;
wire read, write, ref_done, tst_done, ref_error, tst_error;

reg[`ADDR_WIDTH - 1 : 0] address_reg;
reg[`REG_WIDTH - 1 : 0] write_data_reg;
reg read_reg, write_reg;


decryption_regfile reg_file_tst (
    .clk(clk), 
    .rst_n(rst_n), 
    .addr(address), 
    .read(read), 
    .write(write), 
    .wdata(write_data), 
    .rdata(tst_read_data), 
    .done(tst_done), 
    .error(tst_error), 
    .select(tst_select), 
    .caesar_key(tst_caesar), 
    .scytale_key(tst_scytale), 
    .zigzag_key(tst_zigzag)
);

ref_decryption_regfile reg_file_ref (
    .clk(clk), 
    .rst_n(rst_n), 
    .addr(address), 
    .read(read), 
    .write(write), 
    .wdata(write_data), 
    .rdata(ref_read_data), 
    .done(ref_done), 
    .error(ref_error), 
    .select(ref_select), 
    .caesar_key(ref_caesar), 
    .scytale_key(ref_scytale), 
    .zigzag_key(ref_zigzag)
);


task drive_instruction();
begin
    for(index[0] = 0; index[0] < nof_accesses; index[0] = index[0] + 1) begin
        if(input_data[index[0]][`REG_WIDTH + `ADDR_WIDTH] === 1)
            read_register(input_data[index[0]][`ADDR_WIDTH - 1 : 0], index[0]);
        else if(input_data[index[0]][`REG_WIDTH + `ADDR_WIDTH + 1] === 1)
            write_register(input_data[index[0]][`ADDR_WIDTH - 1 : 0], input_data[index[0]][`REG_WIDTH + `ADDR_WIDTH - 1 : `ADDR_WIDTH], index[0]);
    end  
end
endtask

task monitor_reg_if_ref();
begin
    for(index[1] = 0; index[1] < nof_accesses; index[1] = index[1] + 1) begin
        timeout[0] = 20;
        
        while(ref_done === 0)
        begin
            timeout[0] = timeout[0] - 1;
            if(timeout[0] == 0)
            begin
                $display("[TIMEOUT]Access %0d timeout after 20cc", index[1]);
                $finish;
            end
            @(posedge clk);
        end

        if(transactions[index[1]] === 1) begin
            if(ref_error === 0) begin
                ref_data[index[1]] = ref_read_data;
                //$write("Read reference data: %d\n", ref_read_data);
            end
            else
                ref_data[index[1]] = 16'hDEAD;
        end
        else
            if(ref_error === 1)
                ref_data[index[1]] = 16'hDEAD;
            else
                ref_data[index[1]] = 0;

        @(posedge clk);
    end    
end
endtask

task monitor_reg_if_tst();
begin
    for(index[2] = 0; index[2] < nof_accesses; index[2] = index[2] + 1) begin
        timeout[1] = 20;
        
        while(tst_done === 0)
        begin
            timeout[1] = timeout[1] - 1;
            if(timeout[1] == 0)
            begin
                $display("[TIMEOUT]Access %0d timeout after 20cc", index[2]);
                $finish;
            end
            @(posedge clk);
        end
        
        if(transactions[index[2]] === 1) begin
            tst_data[index[2]] = tst_error === 0 ? tst_read_data : 16'hDEAD;
            //if(tst_error === 0)
                //$write("Read tst data: %d\n", tst_read_data);
        end
        else
            if(tst_error === 1)
                tst_data[index[2]] = 16'hDEAD;
            else
                tst_data[index[2]] = 0; 

        @(posedge clk);
    end    
end
endtask

task end_of_test_checks();
begin
    for(i = 0;  i < nof_accesses; i = i + 1)
    begin
        if(ref_data[i] !== tst_data[i]) begin
            if(ref_data[i] == 16'hDEAD) begin
                $write("Access %0d was with ERROR, but RTL did not send error. ", i);
                $write("Access was for address: 0x%x\n", input_data[i][`ADDR_WIDTH - 1 : 0]);
            end 
            else begin
                $write("Register MISMATCH for address 0x%x: expected 0x%x, but found 0x%x\n", input_data[i][`ADDR_WIDTH - 1 : 0],
                                                                ref_data[i], tst_data[i]);
            end

            mismatch = 1;
        end
        else
            mismatch = 0;

        if(mismatch == 0) begin
            $write("[Access PASSED] Access %0d was checked correctly \n", i);
            passed_tests = passed_tests + 1;
        end

    end
end
endtask

task read_register(input reg[`ADDR_WIDTH - 1 : 0] addr, input integer access);
begin
    transactions[read_index] = 1;
    read_index = read_index + 1;

    @(posedge clk);
    $write("Access %0d Reading address: 0x%x\n", access, addr);
    address_reg = addr;
    read_reg = 1;  

    @(posedge clk);
    address_reg  = 0;
    read_reg = 0;

    wait(ref_done == 1 && tst_done == 1);
end
endtask

task write_register(input reg[`ADDR_WIDTH - 1 : 0] addr, input reg[`REG_WIDTH - 1 : 0] data, input integer access);
begin
    transactions[read_index] = 0;
    read_index = read_index + 1;

    @(posedge clk);
    $write("Access %0d Writting address: 0x%x with value 0x%x\n", access, addr, data);
    address_reg = addr;
    write_reg = 1;
    write_data_reg = data;  

    @(posedge clk);
    address_reg  = 0;
    write_reg = 0;
    write_data_reg = 0;

    wait(ref_done == 1 && tst_done == 1);
    
end
endtask

always @(posedge clk) begin
    if(reset_done === 1) begin
        if(ref_select !== tst_select) begin
            $write("[ERROR] Mismatch for SELECT signal: expected %0x, but found %0x\n", ref_select, tst_select);
            $finish;
        end
        else if(ref_caesar !== tst_caesar) begin
            $write("[ERROR] Mismatch for CAESAR_KEY signal: expected %0x, but found %0x\n", ref_caesar, tst_caesar);
            $finish;
        end
        else if(ref_scytale !== tst_scytale) begin
            $write("[ERROR] Mismatch for SCYTALE_KEY signal: expected %0x, but found %0x\n", ref_scytale, tst_scytale);
            $finish;
        end
        else if(ref_zigzag !== tst_zigzag) begin
            $write("[ERROR] Mismatch for ZIGZAG_KEY signal: expected %0x, but found %0x\n", ref_zigzag, tst_zigzag);
            $finish;
        end
    end
end

always #10 clk_reg = !clk_reg;

assign clk          = clk_reg;
assign rst_n        = rst_n_reg;
assign address      = address_reg;
assign write_data   = write_data_reg;
assign read         = read_reg;
assign write        = write_reg;

endmodule

