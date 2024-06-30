/*

6. Napisati funkciju umetniZnak koja na početak zadanog niza znakova umeće zadani znak. 
Funkcija može računati na to da je za niz u pozivajućem programu rezervirano dovoljno 
memorije. U funkciji se ne smiju koristiti funkcije iz <string.h>.

*/

#include <stdio.h>
#define MAXL 20


void umetniZnak(char *p, char znak){
    int length = 0;
    while(*(p + length) != '\0') length++;
    for(int i = length + 1; i > 0; i--) *(p + i) = *(p + i -1);
    *p = znak;
}

int main(void){
    char znak;
    char niz[MAXL + 1];

    printf("Unesite orginalni niz maksimalne duljine 20 znakova: ");
    gets(niz);

    printf("\nUnesite znak koji zelite ubaciti: ");
    scanf("%c", &znak);

    printf("\nOrgnialni niz: %s", niz);
    umetniZnak(&niz[0], znak);
    printf("\nNovi niz: %s", niz);

    return 0;
}