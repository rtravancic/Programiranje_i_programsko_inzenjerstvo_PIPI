/*

2. Napisati C program koji će s tipkovnice učitati cijeli broj m, a zatim na zaslon ispisati tekst 
Istina je ako je učitani broj neparan pozitivan broj.

*/

#include <stdio.h>



int main(void){
    int m;


    printf("Upisite broj: ");
    scanf("%d", &m);

    if (m > 0 && m%2 == 1 ) printf("Ucitan je neparan pozitivan broj!");
    else printf("Nije ucitan neparan pozitivan broj :(");

    return 0;
}