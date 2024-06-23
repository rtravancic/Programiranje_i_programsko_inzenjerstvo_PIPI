/*

4. Napišite funkciju koja zadanoj varijabli tipa double vrijednost uvećava za 10.0. Dakle, funkcija 
treba promijeniti vrijednost neke realne (double) varijable koja je definirana u pozivajućem 
programu. Hoćete li dobiti ispravan rezultat ako funkciju pozovete sa stvarnim argumentom 
koji je pokazivač na varijablu tipa int?


*/

#include <stdio.h>
void uvecaj(double *n){
    *n += 10.0;
}


int main(void){
    int n;
    double nd;
    printf("Unesite int vrijednost: ");
    scanf("%d", &n);
    printf("Unesite double vrijednost: ");
    scanf("%lf", &nd);
    //uvecaj(&n); -- ne radi
    uvecaj(&nd);
    //printf("\nRezultat za int vrijednost: %lf", n);
    printf("\nRezultat za double vrijednost %lf", nd);

    return 0;
}