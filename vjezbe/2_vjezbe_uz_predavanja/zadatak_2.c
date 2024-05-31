/*
 
2. Napisati C program kojim će se s tipkovnice učitati pozitivni cijeli broj koji ima 5 
znamenaka. Nije potrebno provjeravati je li korisnik upisao ispravan broj. Program treba 
na zaslon ispisati prvu i posljednju znamenku učitanog broja. 

*/

#include <stdio.h>

int main(void) {

    int broj;
    printf("Upisite peteroznamenkasti broj: ");
    scanf("%d", &broj);
    printf("\nPrva znamenka: %d\nPosljednja znamenka: %d", (broj/10000), broj%10);
    
    return 0;
}