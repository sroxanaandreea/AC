//TODO implementarea modulului mux4_1, incluzand declararea modulului si interfata.
//	   - respectati numele modulului!
//     - cele doua implementari vor fi testate alternativ

//     iesirea: out
//     intrarile: i1, i2, i3, i4
//     selectia: s1, s2
module mux4_1(
	output out,
	input i1,
	input i2,
	input i3,
	input i4,
	input s1,
	input s2
	);
	
	//a)
	
	//assign out = (~s1 & ~s2 & i1) | (s1 & ~s2 & i2) | (~s1 & s2 & i3) | (s1 & s2 & i4);
	
	//b)
	
	assign out = (s2 == 0) ? (s1 == 0 ? i1 : i2) : (s1 == 0 ? i3 : i4) ;
endmodule
