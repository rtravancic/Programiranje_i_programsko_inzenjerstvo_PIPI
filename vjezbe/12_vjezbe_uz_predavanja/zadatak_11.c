/*

11. S tipkovnice učitati dva niza znakova pri čemu niti jedan niz nije dulji od 20 znakova. 
Učitati cijeli broj, ako broj predstavlja ispravnu poziciju znaka u prvom nizu, u prvi niz 
na zadanu poziciju umetnuti drugi niz, te ispisati (sada promijenjeni) prvi niz. Inače, 
ispisati poruku "Neispravna pozicija". Smatra se da se pozicije počinju od 1, tj. prvi 
znak u nizu (s indeksom nula) jest znak na poziciji 1. 
Primjer: 
ako korisnik upiše nizove 
Ovo je niz 
Novi niz 
i poziciju 0, ispisati Neispravna pozicija. 
ako korisnik upiše nizove 
Ovo je niz 
Novi niz 
i poziciju 3, ispisati OvNovi nizo je niz. 

*/


#include <stdio.h>

#define MAXSIZE 20

int main(void){
    char niz1[MAXSIZE*2 + 1];
    char niz2[MAXSIZE + 1];
    int broj, duljina1, duljina2, i = 0;
    
    printf("\nUpisite niz1:");
    gets(niz1);

    printf("\nUpisite niz2:");
    gets(niz2);

    printf("\nUpisite broj:");
    scanf("%d", &broj);

    while(niz1[i] != '\0') i++;
    duljina1 = i;
    i = 0;
    while(niz2[i] != '\0') i++;
    duljina2 = i;
    if (broj > duljina1 || broj < 1) printf("\nNeispravna pozicija!");
    else{
        for (i = duljina1; i >= broj -1; i--) niz1[i + duljina2] = niz1[i];
        for(i = 0; i < duljina2; i++) niz1[broj -1 + i] = niz2[i];
        printf("%s",niz1);
    }
    

    return 0;
}

