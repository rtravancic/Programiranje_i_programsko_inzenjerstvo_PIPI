/*

7. Napisati funkciju umetniZnakove koja ispred svakog znaka zadanog niza umeće zadani znak 
(npr, ako se funkciji zada niz "Studeni" i znak 'X', funkcija mijenja niz u "XSXtXuXdXeXnXi"). 
Funkcija može računati na to da je za niz u pozivajućem programu rezervirano dovoljno 
memorije. U funkciji se ne smiju koristiti funkcije iz <string.h>. 

*/



#include <stdio.h>
#define MAXL 50


void umetniZnak(char *p, char znak){
    int length = 0;
    while(*(p + length) != '\0') length++;

    
    for(int i = length ; i >= 0; i--) {
        *(p + i*2 + 1) = *(p + i);
        *(p + i*2) = znak;

    }
    *(p + length*2 ) = '\0';
}

int main(void){
    char znak;
    char niz[MAXL*2 + 1];

    printf("Unesite orginalni niz maksimalne duljine 20 znakova: ");
    gets(niz);

    printf("\nUnesite znak koji zelite ubaciti: ");
    scanf("%c", &znak);

    printf("\nOrgnialni niz: %s", niz);
    umetniZnak(&niz[0], znak);
    printf("\nNovi niz: %s", niz);

    return 0;
}