## Task 3

La acest task am implementat mux-ul , demux-ul si modulul top.  
**Demux** - am facut un case care imi verifica select-ul si daca valid este 1 fac un alt case care daca starea este S0 scot in out data_i[31:24], daca S1 scot in out data_i[23:16] , etc .. pana la S3
si am scos toate valorile.  
**Am facut un test separat sa testez demux-ul si mergea bine . Nu stiu de ce mi-ar da timeout.**

**Mux** - la fel am facut un case si daca select-ul corespundea cu iesirea asociata scoteam intrarea pe iesire.  
**decryption_top** - in decryption_top am apelat modulele implementate anterior si le-am legat cum arata schema
