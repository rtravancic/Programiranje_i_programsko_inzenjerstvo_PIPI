/*

6. Riješiti pomoću petlje s ispitivanjem uvjeta na početku. S tipkovnice učitavati i 
sumirati cijele brojeve dok god su oni djeljivi s 3 ili 7. Na kraju ispisati sumu učitanih 
brojeva. Podrazumijeva se da se zadnji broj koji je učitan (onaj zbog kojeg se prekida 
učitavanje) također dodaje u sumu. Vodite računa o tome da već i prvi učitani broj 
može biti "neispravan".

*/

#include <stdio.h>

int main(void){

     int suma = 0, broj = 0;

    while((broj % 7 == 0) || (broj % 3 == 0)){
        printf("\nUcitajte broj: ");
        scanf("%d", &broj);
        suma += broj;
    }

    printf("Suma je: %d", suma);

    return 0;
}