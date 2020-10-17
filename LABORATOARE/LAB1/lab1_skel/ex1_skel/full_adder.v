module half_adder(
    output sum,
    output c_out,   // carry out
    input  a,
    input  b
	);
//TODO implementarea functionarii
	assign sum = a ^ b;
	assign c_out = a && b;

endmodule

module full_adder(
    output sum,
    output c_out,   // carry out
    input  a,
    input  b,
    input  c_in    // carry in
    );
//TODO implementarea functionarii
//Se testeaza alternativ cele 3 variante de implementare
	wire sum_h1;
	wire cout_h1;
	wire sum_h2;
	wire cout_h2;
	
	
//1a. descriere structurala
	half_adder h1(sum_h1, cout_h1, a, b );
	half_adder h2(sum_h2, cout_h2 ,c_in, sum_h1);

	assign sum = sum_h2;
	assign c_out = cout_h1 | cout_h2;
  
//1b. ecuatia logica
	//assign sum = a ^ b ^ c_in;
	//assign c_out = ((a ^ b) && c_in) || (a && b);
//1c. implementare folosind operatori
	//assign {c_out, sum} = a + b + c_in;  
endmodule
