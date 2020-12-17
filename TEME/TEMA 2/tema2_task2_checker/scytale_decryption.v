`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:24:12 11/27/2020 
// Design Name: 
// Module Name:    scytale_decryption 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module scytale_decryption#(
			parameter D_WIDTH = 8, 
			parameter KEY_WIDTH = 8, 
			parameter MAX_NOF_CHARS = 50,
			parameter START_DECRYPTION_TOKEN = 8'hFA
		)(
			// Clock and reset interface
			input clk,
			input rst_n,
			
			// Input interface
			input[D_WIDTH - 1:0] data_i,
			input valid_i,
			
			// Decryption Key
			input[KEY_WIDTH - 1 : 0] key_N,
			input[KEY_WIDTH - 1 : 0] key_M,
			
			// Output interface
			output reg[D_WIDTH - 1:0] data_o,
			output reg valid_o,
			
			output reg busy
    );

// TODO: Implement Scytale Decryption here
reg [15:0] a[0:50]; //Declararea vectorului
integer i=0, j=0, k=0, q=0, n=0;
reg [15:0] p;


always @(posedge clk) begin
	data_o <= 0;
	valid_o <= 0;
	busy <= 0;
	p <= key_M * key_N; //Am folosit un registru p in care am calculat produsul dintre key_M si key_N care reprezinta numarul maxim de caractere din fiecare exemplu.


	if( rst_n == 0)
	begin
		data_o <= 0;
		valid_o <= 0;
		busy <= 0;
	end

	//Verific daca semnalul valid_i este 1. In acest caz voi pune elemente in vector atat timp cat data_i este diferit
	// de START_DECRYPTION_TOKEN.
	if ( valid_i == 1) begin
		i <= 0; // Inainte de fiecare decriptare initializez i-ul cu 0.
		if (data_i != START_DECRYPTION_TOKEN ) begin
				a[i] <=  data_i;
				n <= n + 1; // Numar cate elemente pun in vector pentru fiecare decriptare
				i <= i + 1;
				busy <= 0;
				valid_o <= 0;
		end
	
	end

	//Verific cand data_i este egal cu START_DECRYPTION_TOKEN
	if (data_i == START_DECRYPTION_TOKEN ) begin
		q <= 1;
	end

	//Algoritmul pe care l-am gandit pentru decriptare este nefunctional. Primesc TIMEOUT in simulare.
	//Am incercat sa verific in prima parte daca data_i este egal cu START_DECRYPTION_TOKEN si daca 
	//indicele folosit pentru decriptare este mai mic decat numarul de elemente din vector pentru fiecare exemplu.
	//In continuare, in interiorul if-ului adaug in data_o elementele decriptate dupa cum urmeaza:
	//Merg din "cheie" in "cheie" si scot in aceasta ordine elementele din vector pentru a le adauga in data_o.
	//In momentul in care indicele devine mai mare decat numrul maxim de elemente din vector pe acel exemplu
	//atunci voi trece pe linia urmatoare incrementand j-ul cu 1, iar indicele (k) devenind j. Astfel voi sari
	//peste elementul initial anterior scris deja in data_o.
	if( (q == 1) && (k < n)) begin
		data_o <= a[k];
		valid_o <= 1;
		busy <= 1;
		k <= k + key_N ;
		if (k >= p) begin
			j <= j + 1;
			k <= j;
		end
			
	end
	
end

endmodule
