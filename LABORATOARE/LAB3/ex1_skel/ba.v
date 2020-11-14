module ba(
    output reg o,   // found output: 0 - not found, 1 - found
    input i,        // char input: 0 - 'a', 1 - 'b'
    input clk);     // clock input

// TODO: Implementarea automatului de stari
parameter S0 = 0,Sa = 1,Sb = 2,SA = 3;
debouncer d1(clk50MHz, i, i_clean);
debouncer d2(clk50MHz, clk, clk_clean);
	
always @(*) // always block to compute both output & nextstate
begin
	o = 0;
	case(counter)
		S0:	if(i == 0)
				begin
					o = 0;
					counter + 1 = Sa;
				end
				else 
					counter + 1 = Sb;
		Sa:	if(i == 0)
				begin
					o = 0;
					counter + 1 = Sa;
				end
				else
					counter + 1  = Sb;
				end
		Sb:	if(i == 0)
				begin
					o = 1;
					counter + 1  = SA;
				end
				else 
					counter + 1 = Sb;
		SA:	if(i == 0)
				begin
					o = 0;
					counter + 1 = Sa;
				end
				else
					counter + 1  = Sb;
	endcase
end

endmodule
