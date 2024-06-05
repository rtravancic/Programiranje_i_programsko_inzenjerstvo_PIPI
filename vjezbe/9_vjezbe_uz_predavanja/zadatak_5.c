/*

5. Riješiti pomoću petlje s ispitivanjem uvjeta na početku. S tipkovnice učitavati i 
sumirati cijele brojeve dok god su oni djeljivi s 3 ili 7. Na kraju ispisati sumu učitanih 
brojeva. Podrazumijeva se da se zadnji broj koji je učitan (onaj zbog kojeg se prekida 
učitavanje) ne dodaje u sumu. Vodite računa o tome da već i prvi učitani broj može 
biti "neispravan".

*/


#include <stdio.h>

int main(void){

    int suma = -1, broj = 1;

    while((broj % 7 != 0) || (broj % 3 != 0)){
        suma += broj;
        printf("\nUcitajte broj: ");
        scanf("%d", &broj);
    }

    printf("Suma je: %d", suma);

    return 0;
}
