/*

5. Načinite program koji će s tipkovnice učitati nenegativni cijeli broj iz intervala [0, 
4294967295]. Učitani broj treba ispisati u oktalnom obliku. Npr. za učitani broj 250 
treba ispisati 00000000372; za učitani broj 4294967295 treba ispisati 37777777777. 
Zadatak riješite tako da grupe od po tri bita pretvarate u oktalne znamenke. Za 
određivanje grupa po tri bita koristite operator posmaka u desno (za tri mjesta) i 
bitovni operator &. Uputa: vrijednost tipa podatka unsigned treba se učitati po 
formatu %u. 

*/

#include <stdio.h>

int main(void){

    unsigned int broj;
    int iter = 30;
    printf("Ucitajte broj iz intervala [0, 4294967295]: ");
    scanf("%u", &broj);

    while(iter >= 0){
        printf("%d", ((broj >> iter) & 07));
        iter -= 3;
       
    }


    return 0;
}