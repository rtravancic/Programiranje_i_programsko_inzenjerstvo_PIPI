/*

12. S tipkovnice učitati dva niza znakova pri čemu niti jedan niz nije dulji od 20 znakova. 
U treći niz znakova upisati rezultat operacije nadovezivanja nizova (konkatenacije 
nizova) te ispisati treći niz. 
Primjer: 
ako korisnik upiše nizove 
Ovo je niz 
Novi niz 
treba formirati i ispisati treći niz čiji je sadržaj Ovo je nizNovi niz.

*/

#include <stdio.h>
#define MAXSIZE 20

int main(void){
    char niz1[MAXSIZE+1], niz2[MAXSIZE+1], niz3[2*MAXSIZE+1];
    int duljina1, duljina2, i = 0, j = 0;

    printf("Upisite niz1: ");
    gets(niz1);
    
    printf("Upisite niz2: ");
    gets(niz2);

    while(niz1[i] != '\0') {
        niz3[i] = niz1[i];
        i++;
    }
    while(niz2[j] != '\0') {
        niz3[i + j] = niz2[j];
        j++;
    }
    niz3[i+j] = '\0';

    printf("%s", niz3);

    return 0;
}