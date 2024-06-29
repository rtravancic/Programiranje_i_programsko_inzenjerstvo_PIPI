/*

3. Napisati funkciju traziPrviSamoglas koja u zadanom nizu znakova pronalazi prvi samoglasnik 
(malo ili veliko slovo) koji se pojavljuje u nizu. Funkcija u pozivajući program vraća pokazivač
na pronađeni samoglasnik, a ako u nizu nema niti jedan samoglasnik, vraća null pokazivač. 
Napisati glavni program koji će pomoću funkcije gets učitati niz znakova ne dulji od 80 
znakova, te pomoću funkcije traziPrviSamoglas pronaći te na zaslon ispisati prvi samoglasnik 
učitanog niza ili poruku "U nizu nema samoglasnika".

*/

#define MAXL 80
#include <stdio.h>
#include <stdlib.h>

char *traziPrviSamoglasnik(char *p){
    while(*p != '\0'){
        if (*p == 'a' || *p == 'e' || *p == 'i' || *p == 'o' || *p == 'u' || *p == 'A' || *p == 'E' || *p == 'I' || *p == 'O' || *p == 'U'){
             return p;
        }
        *p++;
    }
    return NULL;
}
/*


int main(void){
    char polje[MAXL + 1];
    printf("Upisite znakovni niz ne dulji od 80 znakova: ");
    gets(polje);
    char *null = NULL;
    char *rez = traziPrviSamoglasnik(polje);
    if (rez != null) printf("\nVracen je pokazivac na znak %c", *rez);
    else printf("\nVracen je NULL pokazivac.");
    return 0;
}
*/