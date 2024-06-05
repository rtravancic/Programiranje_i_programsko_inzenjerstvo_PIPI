/*

13. Riješiti pomoću petlje s ispitivanjem uvjeta na kraju (do-while). Usporediti s rješenjem 
u kojem se koristila petlja s ispitivanjem uvjeta na početku. S tipkovnice učitavati i 
sumirati cijele brojeve dok god su oni djeljivi s 3 ili 7. Na kraju ispisati sumu učitanih 
brojeva. Podrazumijeva se da se zadnji broj koji je učitan (onaj zbog kojeg se prekida 
učitavanje) ne dodaje u sumu. Vodite računa o tome da već i prvi učitani broj može 
biti "neispravan".

*/

#include <stdio.h>

int main(void){
    int b = 0;
    int sum = 0;
    do{
        sum += b;
        printf("\nUpisite broj: ");
        scanf("%d", &b);

    } while(b % 7 == 0 || b % 3 == 0);
    printf("Suma je: %d", sum);
    return 0;
}