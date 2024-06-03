/*
 
1. Napisati C program koji će s tipkovnice učitati cijeli broj x, a zatim na zaslon ispisati tekst 
Istina je ako je učitani broj u intervalu [1, 9] ili je u intervalu [80, 90].

*/



#include <stdio.h>

int main(void){

    int x;
    printf("Upisite broj x: ");
    scanf("%d", &x);

    if ((x >= 1 && x <= 9)||(x >= 80 && x <= 90)) printf("Istina je!");
    else printf("Nije istina :(");
    
    return 0;
}