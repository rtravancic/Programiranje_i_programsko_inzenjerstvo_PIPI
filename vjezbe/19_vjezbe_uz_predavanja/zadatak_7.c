/*

7. Napisati funkciju genmat koja u dvodimenzijskom cjelobrojnom polju definiranom s 
dimenzijama 4 retka i 4 stupca (funkcija radi isključivo s poljima dimenzija 4x4) upisuje četiri 
jedinice na glavnu dijagonalu. 
U pozivajućem programu definirajte polje, sve članove polja inicijalizirajte na nulu, pozovite 
funkciju genmat, te na zaslon ispišite dobiveni rezultat. Ispis mora izgledati ovako: 
 1 0 0 0 
 0 1 0 0 
 0 0 1 0 
 0 0 0 1 
Nakon toga pokušajte napisati drugačiji glavni program: definirajte polje od 5 redaka i 5 
stupaca, inicijalizirajte sve elemente polja na nulu, pozovite istu funkciju genmat i ispišite 
svih 5x5 članova polja. Možete li predvidjeti kako će izgledati ispis? Zašto ispisana tablica ne 
izgleda (što bi se možda moglo očekivati) ovako: 
 1 0 0 0 0 
 0 1 0 0 0 
 0 0 1 0 0 
 0 0 0 1 0 
 0 0 0 0 0

*/

#include <stdio.h>


void genmat(int *p){
    for (int i = 0; i <= 15; i += 5) *(p + i) = 1;
}


int main(void){

    int polje1[4][4] = {0};
    int polje2[5][5] = {0};

    int *polje = &polje1[0][0];

    printf("Prije genmat: \n");
    for(int i = 0; i <= 15; i++) {
        printf("%d ", *(polje + i));
        if ((i + 1) % 4 == 0) printf("\n");
    }

    printf("\nPoslje genmat: \n");
    genmat(&polje1[0][0]);

    for(int i = 0; i <= 15; i++) {
        printf("%d ", *(polje + i));
        if ((i + 1) % 4 == 0) printf("\n");
    }

    polje = &polje2[0][0];
    printf("\n\nPrije genmat: \n");
    for(int i = 0; i <= 24; i++) {
        printf("%d ", *(polje + i));
        if ((i + 1) % 5 == 0) printf("\n");
    }

    printf("\nPoslje genmat: \n");
    genmat(&polje2[0][0]);

    for(int i = 0; i <= 24; i++) {
        printf("%d ", *(polje + i));
        if ((i + 1) % 5 == 0) printf("\n");
    }


    return 0;
}