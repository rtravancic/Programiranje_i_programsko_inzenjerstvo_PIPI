/*

5. Napisati program koji će pomoću funkcije scanf iz <stdio.h> učitati dva niza znakova s1 i 
s2, čiji se sadržaj unosi preko tipkovnice i to tako da se svaki niz utipka u svojem retku. 
Oznaka kraja retka se ne učitava u niz znakova. Npr. sadržaj ulaza može izgledati ovako: 

Dva psa. 
Jedan macak.


Može se računati da niti jedan redak teksta neće biti dulji od 30 znakova. Program treba 
formirati niz s3, čiji sadržaj nastaje spajanjem nizova s1 i s2, te dobiveni niz s3 ispisati na 
zaslon. U navedenom primjeru na zaslon treba ispisati: 

Dva psa.Jedan macak.


*/

#include <stdio.h>
#include <string.h>
#define MAXLEN 30

int main(void){
    char s1[MAXLEN + 1], s2[MAXLEN + 1];
    scanf("%[^\n]", &s1[0]);
    getchar();
    scanf("%[^\n]", &s2[0]);
    getchar();

    printf("%s", strcat(s1, s2));
    return 0;
}