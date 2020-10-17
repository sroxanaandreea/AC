module adder4(
	//TODO declarati iesirea modulului, cu numele sum
	 output[4:0] sum,
    input[3:0] a, 
	 input[3:0] b);       //operands

//TODO implementarea functionarii.
//cele doua implementari se vor testa alternativ
// a)
	
wire c_out_1;
wire c_out_2;
wire c_out_3;
wire c_out_4;



half_adder half1(sum[0], c_out_1, a[0], b[0]);

full_adder full1(sum[1], c_out_2, a[1], b[1]);
full_adder full2(sum[2], c_out_3, a[2], b[2]);
full_adder full3(sum[3], c_out_4, a[3], b[3]);

assign sum[4] = c_out_4;
//b)



endmodule
