/*

6. S tipkovnice učitavati cijele brojeve dok god se naizmjence upisuje jedan pozitivan, 
jedan negativan, jedan pozitivan broj, itd. Upisivanje pozitivnog broja nakon 
pozitivnog ili upisivanje negativnog broja nakon negativnog ili upisivanje nule smatra 
se pogreškom. U slučaju takve pogreške program ispisuje sumu svih do tada 
ispravno upisanih brojeva (upisanih prije pogreške) i prekida se njegovo izvršavanje. 
Prvi broj koji se upiše s tipkovnice može biti ili pozitivan ili negativan.

*/

#include <stdio.h>

int main(void){
    int suma = 0;
    int prethodni;
    int broj;
    int flag = 1;
    int count = 0;

   
    while (flag == 1){
        printf("Upisite broj: ");
        scanf("%d", &broj);
        count++;
        
        if (count > 1 || broj == 0){
            if(broj%2 == prethodni%2 || broj == 0) break;
        }
        suma += broj;
        prethodni = broj;

    }
    printf("Suma je: %d", suma);



    return 0;
}