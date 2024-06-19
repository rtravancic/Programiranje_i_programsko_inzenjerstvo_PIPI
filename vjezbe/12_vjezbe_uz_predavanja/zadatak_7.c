/*

7. S tipkovnice, u obliku dekadskih brojeva, učitati najviše 8 ASCII vrijednosti znakova. 
Učitavanje prekinuti i onda kada korisnik unese ASCII vrijednost koja ne predstavlja 
veliko slovo abecede. Učitane vrijednosti pohraniti u polje znakova koje se koristi kao 
niz znakova. Na kraju, ispisati dobiveni niz znakova pomoću funkcije printf i formata 
%s. 
Primjeri: 
ako korisnik upiše sljedeći niz ASCII vrijednosti: 
 80 69 82 85 64 80 69<Enter> na zaslon treba ispisati PERU
ako korisnik upiše sljedeći niz ASCII vrijednosti: 
 65 82 71 69 78 84 73 78 65 66<Enter> na zaslon treba ispisati 
ARGENTIN

*/

#include <stdio.h>
#define MAXNIZ 8

int main(void){
    int ascii = 0;
    int i = 0;
    char niz[MAXNIZ + 1];

    do {
        scanf("%d", &ascii);
        niz[i] = ascii;
        
        if (ascii >= 'A' && ascii <= 'Z'){
            niz[i++] = ascii;
        } 
        

    } while(i < MAXNIZ  && ascii >= 'A' && ascii <= 'Z' );

    niz[i] = '\0';
    printf("%s", niz);

    return 0;
}