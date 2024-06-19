/*

10. S tipkovnice učitati niz znakova koji sigurno nije dulji od 100 znakova. Učitati cijeli 
broj, ako broj predstavlja ispravnu poziciju znaka u nizu, u niz na zadanu poziciju 
umetnuti slovo 'X' te promijenjeni niz ispisati na zaslon. Inače, ispisati poruku 
"Neispravna pozicija". Smatra se da se pozicije počinju od 1, tj. prvi znak u nizu (s 
indeksom nula) jest znak na poziciji 1. 
Primjeri: 
ako korisnik upiše Ovo je niz i poziciju 0, ispisati Neispravna pozicija. 
ako korisnik upiše Ovo je niz i poziciju 12, ispisati Neispravna pozicija. 
 ako korisnik upiše Ovo je niz i poziciju 3, ispisati OvXo je niz.

*/


#include <stdio.h>
#define MAXSIZE 100

int main(void){
    char niz[MAXSIZE + 1];
    gets(niz);
    int broj;

    printf("\nUpisite cijeli broj: ");
    scanf("%d", &broj);


    int duljina = 0;
    while(niz[duljina] != '\0') ++duljina;

    if (broj >= 1 && broj <= duljina) {
        niz[broj - 1] = 'X';
        printf("%s", niz);
    }
    else printf("Neispravna pozicija!");



    return 0;
}