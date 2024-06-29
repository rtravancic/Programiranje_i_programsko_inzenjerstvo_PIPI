/*

4. Napisati glavni program koji će pomoću funkcije gets učitati niz znakova ne dulji od 80 
znakova, pomoću funkcije traziPrviSamoglas iz prethodnog zadatka pronaći te na zaslon, 
pomoću funkcije printf i formatske specifikacije %s, ispisati podniz koji započinje na 
pronađenom samoglasniku i završava na kraju učitanog niza. Ako u učitanom nizu nema niti 
jednog samoglasnika, glavni program treba ispisati poruku "U nizu nema samoglasnika". 
Primjeri: 
• za učitani niz Svjetsko prvenstvo glavni program ispisuje etsko prvenstvo 
• za učitani niz Aktualni sat glavni program ispisuje Aktualni sat 
• za učitani niz 3. vrsta glavni program ispisuje a
• za učitani niz vrt glavni program ispisuje U nizu nema samoglasnika

*/


#define MAXLEN 80
#include <stdio.h>
#include "zadatak_2.h"
#include <stdlib.h>

int main(void){
    char niz[MAXLEN];
    gets(niz);

    char *first = traziPrviSamoglasnik(niz);

    if (first != NULL) printf("\n%s", first);
    else printf("\nU nizu nema samoglasnika.");

    return 0;
}