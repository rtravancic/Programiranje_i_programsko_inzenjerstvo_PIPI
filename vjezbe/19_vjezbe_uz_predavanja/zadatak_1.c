/*

1. Napišite funkciju koja u zadanom nizu znakova (jednodimenzijskom polju znakova 
terminiranom sa znakom '\0') pronalazi sve samoglasnike i ispisuje ih na zaslon. Npr. za 
zadani niz Antigona, ispisuje Aioa.

*/

#include <stdio.h>
#define MAX_L 20
void ispisiSamoglasnike(char *p){
    while(*p != '\0'){
        if (*p == 'a' || *p == 'e' || *p == 'i' || *p == 'o' || *p == 'u' || *p == 'A' || *p == 'E' || *p == 'I' || *p == 'O' || *p == 'U'){
             printf("%c", *p);
        }
        *p++;
    }

}


int main(void){
    char polje[MAX_L]; 
    printf("Upisite znakovni niz: ");
    gets(polje);
    printf("\n");
    ispisiSamoglasnike(&polje[0]);
    return 0;
}