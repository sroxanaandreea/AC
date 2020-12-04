`define ADDR_WIDTH         8  
`define REG_WIDTH         16

module test;

// Tester
reg clk_reg;                                // master clock
reg rst_n_reg;

real percentage;                            // test passed percentage
real grade;                                 // test grade
integer file;                               // results file
integer passed_tests = 0;
integer i, j, index[1:0], timeout[1:0];
reg mismatch;
reg reset_done;

integer nof_accesses;

reg[`REG_WIDTH - 1 : 0] ref_data[1000 : 0], tst_data[1000 : 0];
reg[1000 : 0] transactions;
integer read_index;

initial begin
    // initialize inputs
    clk_reg         = 0;
    rst_n_reg       = 1;
    address_reg     = 0;
    write_data_reg  = 0;
    read_reg        = 0;
    write_reg       = 0;
    read_index 		= 0;
    reset_done 		= 0;
    nof_accesses 	= 3*(2**`ADDR_WIDTH);

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
    $fwrite(file, "%6.2f: %0d correct out of %0d (%6.2f%% completed)\n", 0.5 * (grade - 1.0), passed_tests, nof_accesses, 100.0 * percentage);
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
    for(i = 0; i < 2**`ADDR_WIDTH; i = i + 1) begin
        read_register(i, i);
    end

    for(i = 0; i < 2**`ADDR_WIDTH; i = i + 1) begin
        write_register(i, i, 2**`ADDR_WIDTH + i);
    end

    for(i = 0; i < 2**`ADDR_WIDTH; i = i + 1) begin
        read_register(i, 2*(2**`ADDR_WIDTH) + i);
    end
end
endtask

task monitor_reg_if_ref();
begin
    for(index[0] = 0; index[0] < nof_accesses; index[0] = index[0] + 1) begin
        timeout[0] = 20;
        
        while(ref_done === 0)
        begin
            timeout[0] = timeout[0] - 1;
            if(timeout[0] == 0)
            begin
                $display("[TIMEOUT]Access %0d timeout after 20cc", index[0]);
                $finish;
            end
            @(posedge clk);
        end

        if(transactions[index[0]] === 1) begin
            if(ref_error === 0) begin
                ref_data[index[0]] = ref_read_data;
                //$write("Read reference data: %d\n", ref_read_data);
            end
            else
                ref_data[index[0]] = 16'hDEAD;
        end
        else
            if(ref_error === 1)
                ref_data[index[0]] = 16'hDEAD;
            else
                ref_data[index[0]] = 0;

        @(posedge clk);
    end    
end
endtask

task monitor_reg_if_tst();
begin
    for(index[1] = 0; index[1] < nof_accesses; index[1] = index[1] + 1) begin
        timeout[1] = 20;

        while(tst_done === 0)
        begin
            //$write("Waiting for tst done\n");
            timeout[1] = timeout[1] - 1;
            if(timeout[1] == 0)
            begin
                $display("[TIMEOUT]Access %0d timeout after 20cc", index[1]);
                $finish;
            end
            @(posedge clk);
        end
        
        if(transactions[index[1]] === 1) begin
            tst_data[index[1]] = tst_error === 0 ? tst_read_data : 16'hDEAD;
            //if(tst_error === 0)
                //$write("Read tst data: %d\n", tst_read_data);
        end
        else
            if(tst_error === 1)
                tst_data[index[1]] = 16'hDEAD;
            else
                tst_data[index[1]] = 0; 
        
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
                $write("Access was for address: 0x%x\n", i % 2**`ADDR_WIDTH);
            end 
            else begin
                $write("Register MISMATCH for address 0x%x: expected 0x%x, but found 0x%x\n", i % 2**`ADDR_WIDTH,
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

task read_register(input reg[`ADDR_WIDTH - 1:0] addr, input integer access);
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

task write_register(input reg[`ADDR_WIDTH - 1 : 0] addr, input reg[`REG_WIDTH -1 : 0] data, input integer access);
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


always #10 clk_reg = !clk_reg;

assign clk          = clk_reg;
assign rst_n        = rst_n_reg;
assign address      = address_reg;
assign write_data   = write_data_reg;
assign read         = read_reg;
assign write        = write_reg;

endmodule

