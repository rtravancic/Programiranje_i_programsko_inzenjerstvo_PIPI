/*

1. S tipkovnice učitati 10 cijelih brojeva i zatim ih ispisati u obrnutom poretku u odnosu 
na poredak kojim su učitani. Naputak: učitavati brojeve i pohranjivati ih u polje, zatim 
ispisati brojeve čitajući polje od 10. člana prema prvom. Kakve se ovdje petlje trebaju 
koristiti?

*/

#include <stdio.h>

#define POLJE_SIZE 10

int main(void){

    int polje[POLJE_SIZE];


    for(int i = 0; i<10; i++) {
        printf("\nUcitajte broj: ");
        scanf("%d", &polje[i]);
    }

    for(int i = POLJE_SIZE - 1; i >= 0; i--) printf("%d ", polje[i]);
    return 0;
}