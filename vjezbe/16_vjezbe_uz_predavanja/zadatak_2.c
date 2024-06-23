/*
2. Napisati funkciju koja sadržaj neke cjelobrojne varijable n iz pozivajućeg programa mijenja u 
n
2
. Dakle, funkcija treba promijeniti vrijednost neke cjelobrojne varijable koja je definirana u 
pozivajućem programu. Kojeg je tipa funkcija? Funkcija je void tipa

*/

#include <stdio.h>

void kvad(int *n){
    *n *= *n;
    return;
}


int main(void){
    int n;
    printf("Unesite broj koji zelite kvadrirat: ");
    scanf("%d", &n);
    kvad(&n);
    printf("\nRezultat je %d", n);
    return 0;
}