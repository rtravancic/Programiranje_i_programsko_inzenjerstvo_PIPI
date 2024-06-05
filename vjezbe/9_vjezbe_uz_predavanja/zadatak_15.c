/*

15. Napisati dva rješenja. Jedno rješenje pomoću petlje s ispitivanjem uvjeta na početku 
i jedno rješenje pomoću petlje s ispitivanjem uvjeta na kraju. Usporediti rješenja. S 
tipkovnice učitati nenegativan cijeli broj N (N može biti nula!). Na zaslon ispisati N 
kvocijenata (može biti niti jedan) u obliku realnih brojeva ukupne širine 7 znakova, s 
pet decimala iza decimalne točke): 

*/

#include <stdio.h>

int main(void){
    int n;
    int iter = 0; // iter = 1

    printf("Upisite broj n: ");
    scanf("%d", &n);


    while(iter++ < n){
        printf("%7.5f\t", iter/(iter+1.0));
    }
    // ili do printf("%7.5f\t", iter/(iter+1.0)); while(iter++ < n)

    return 0;
}