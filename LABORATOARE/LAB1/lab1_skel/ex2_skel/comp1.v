// TODO: Implementarea unui comparator pe 1 bit.
// intrari: a și b
// iesiri: lt (a less than b), gt (a greater than b ), eq (a equal to b)
module comp1(
    input a,
    input b,
    output lt, gt, eq
    );
	 
	assign lt = a < b;
	assign gt = a > b;
	assign eq = a == b;

endmodule
