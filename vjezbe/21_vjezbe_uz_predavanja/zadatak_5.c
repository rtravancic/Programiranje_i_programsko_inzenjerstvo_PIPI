/*5. Napisati funkciju obrniNiz koja obrće niz znakova. Npr. niz znakova "ABCDE" mijenja u niz 
znakova "EDCBA". Uputa: 1. znak zamijeniti s n-tim znakom, 2. znak zamijeniti s n-1-vim 
znakom, itd.*/


#include <stdio.h>
#include <stdlib.h>
#define MAXLEN 20
void obrniNiz(char *p){
    int length = 0; // duljina
    char helper;
    while(*(p + length) != '\0') length++;

    for(int i = 0; i < (length / 2); i++){ 
        helper = *(p + i);
        *(p + i) = *(p + length - 1 -i);
        *(p + length - 1 -i) = helper;
    }
}



int main(void){
    char niz[MAXLEN + 1];
    printf("Upisite niz ne dulji od 20 znakova: ");
    gets(niz);

    printf("\nPocetni niz: %s", niz);

     obrniNiz(&niz[0]);

    printf("\nObrnuti niz: %s", niz);

    return 0;
}