/*

10. Načinite program za izračunavanje "m povrh n". 
 m! / ( n! · (m - n)! ) 
 Vrijednosti za m i n učitati s tipkovnice uz kontrolu jesu li te vrijednosti ispravno 
zadane (cijeli brojevi veći ili jednaki 0, m je veći ili jednak n). 

*/

#include <stdio.h>

int main(void){
    int m, n, iter;
    float nazivnikn = 1, nazivnikmn = 1, brojnik = 1;

    printf("Unestire m i n, m > n >= 0  ::  ");
    scanf("%d %d", &m, &n);

    if (m >= n && n >= 0){
        for (iter = 1; iter <= m; iter++) brojnik *= iter;
        for (iter = 1; iter <= n; iter++) nazivnikn *= iter;
        for (iter = 1; iter <= (m-n); iter++) nazivnikmn *= iter;
        printf("%d povrh %d = %f", m, n, (brojnik/(nazivnikmn*nazivnikn)) );

    } else printf("\nUneseni neispravni brojevi.");
    return 0;
}