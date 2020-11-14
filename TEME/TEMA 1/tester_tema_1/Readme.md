## Tema 1 

In modulul temperature_top am realizat conexiunile necesare intre module 
pentru o buna functionalitate a acestora. Am luat iesirile modulelor sensors_input si division
ca si wire-uri pentru conectarea modulelor. Am luat un wire intermediar Dir pentru a extinde valoarea de pe 8 biti la valoarea pe 16.


In modulul sensors_input am verificat gradul de disponibilitate al senzorilor si am furnizat suma valorilor valide, 
precum si numarul senzorilor activi. Prima oara am declarat un n si un t de tip register pe 8 si 16 biti si in blocul 
always am atribuit valoarea initiala 0 pentru n si t, iar apoi am comparat fiecare bit in parte al senzorului sensors_en_i
pentru a veirifica daca acesta e activ. In caz ca era pozitiv cresteam numarul senzorilor activi si adunam valoarea 
de temperatura al acestuia la suma temperaturilor. La final, in afara blocului always folosind assign am atribuit lui
nr_active_sensors_o si temp_sum_o valorile calculate anterior , anume n si t.


In modulul division am implementat un algoritm pentru impartirea cu cat si rest a doua numere naturale reprezentate
pe 16 biti cu datele provenite de la modulul sensors_input. Initial am declarat Q_o si R_o de tip register pe 16 biti.
In interiorul blocului always am implementat algoritmul impartirii cu rest, gasit pe site-ul wikipedia din resurse. 
In acest algoritm am initializat Q_o si R_o cu 0; in continuare am luat un for de la numarul de biti ai lui N -1 care 
merge descrescator pana la 0. In interiorul for-ului am shiftat R_o cu un bit si am setat bitul cel mai nesemnificativ din
R_o cu bitul i al lui N(deimpartitului). In cazul in care R_o era mai mare sau egal cu D(impartitorul), atunci din R_o se scadea 
valoarea lui D iar bitul cu valoarea i din Q_o il egalam cu 1. La final , in afara blocului always atribui prin assign lui Q si R, 
valorile lui Q_o si R_o.


In modulul output_display am aproximat valoarea medie a temperaturii la intregul cel mai apropiat si am afisat informatia codificata.
Initial am declarat a de tip register pe 1 bit, c si n pe 8 biti, iar cat si rest pe 16 biti. In continuarea in interiorul blocului
assign am atribuit cat = temp_Q_i, rest = temp_R_i si n = active_sensors_nr calculate anterior. In continuare am verificat daca
diferenta dintre impartitor( in acest caz nr_active_sensors) si rest este mai mica sau egala decat restul, atunci catul ar fi crescut cu o unitate,
iar restul ar fi devenit 0 ( adica valoarea ar fi fost aproximata la intregul urmator cel mai apropiat). In caz contrar, cat-ul ar fi ramas la fel, 
iar restul ar fi devenit 0 . In alt bloc always am codificat valorile aproximate folosind structura case in care daca valoarea catului ar fi 
fost mai mica decat 19 , valoarea codificata ar fi fost 8'b0000_0001 si 8'b1111_1111 in cazul in care valoarea catului era mai mare decat 26.
In urmatorul bloc always am setat alrama ca fiind 1 in cazul in care catul era mai mic decat 19, 0 in cazul in care catul era fix 26, 
1 in cazul in care catul era mai mare decat 26 si 0 in rest pentru a acoperi toate posibilitatile. La final am atribuit lui coded_out_o valoarea c si lui alert_o valoarea a.
