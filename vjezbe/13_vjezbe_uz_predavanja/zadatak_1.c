/*

1. S tipkovnice, redak po redak, učitati članove cjelobrojne matrice dimenzija 4 retka i 3 
stupca. Ispisati matricu (u obliku dvodimenzijske tablice), te aritmetičku sredinu 
vrijednosti članova matrice.

*/

#include <stdio.h>
#define BR_REDAK 4
#define BR_STUPAC 3


int main(void){

    int matrica[BR_REDAK][BR_STUPAC];
    float total = 0;
    for (int i = 0; i < BR_REDAK; i++){

        for(int j = 0; j < BR_STUPAC; j++){
            printf("Upisite vrijednost: ");
            scanf("%d", &matrica[i][j]);
            total += matrica[i][j];
        }
    }


    for(int i = 0; i < BR_REDAK; i++){
        for(int j = 0; j < BR_STUPAC; j++){
             printf("%d ", matrica[i][j]);
        }
        printf("\n");
    }

    printf("Aritmeticka sredina je: %f", total / (BR_REDAK*BR_STUPAC));

    return 0;
}