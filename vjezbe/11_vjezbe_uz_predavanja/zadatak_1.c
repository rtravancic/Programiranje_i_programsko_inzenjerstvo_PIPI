/*

1. Napisati bolje rješenje (bez break i continue) zadatka sa 65. stranice predavanja.

 Napisati program koji će učitavati cijele brojeve s tipkovnice i 
postupati prema sljedećem pravilu: ako je učitani broj manji od 
nule, treba ispisati poruku Nedopustena vrijednost i prestati 
s učitavanjem brojeva. Ako je učitani broj veći od 100, treba ga 
zanemariti, ispisati poruku Zanemarujem vrijednost i nastaviti 
s učitavanjem, a inače treba ispisati učitani broj. Osim u slučaju 
pogreške s učitavanjem brojeva prestati kada se učita (i ispiše) 
broj nula. 

*/

#include <stdio.h>

int main(void){
    int flag = 1;
    int broj;
    while(flag == 1){
        printf("\nUcitajte cijeli broj: ");
        scanf("%d", &broj);
        if (broj < 0){
            printf("\nNedopustena vrijednost.");
            flag = 0;
        } else if(broj > 100) printf("\nZanemarujem");
        else{
            printf("\n%d", broj);
            flag = broj != 0;
        }
    }
    return 0;
}