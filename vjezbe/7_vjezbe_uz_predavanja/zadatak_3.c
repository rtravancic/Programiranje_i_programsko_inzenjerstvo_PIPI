/*

3. Napisati C program koji će na zaslon ispisati tekst Istina je ako uvjet iz 1. zadatka 
nije zadovoljen (napisati jedno rješenje uz korištenje operatora negacije i jedno rješenje 
bez korištenja operatora negacije). 


1. Napisati C program koji će s tipkovnice učitati cijeli broj x, a zatim na zaslon ispisati tekst 
Istina je ako je učitani broj u intervalu [1, 9] ili je u intervalu [80, 90]. 

*/


#include <stdio.h>

int main(void){

    int x;
    printf("Upisite broj x: ");
    scanf("%d", &x);

    if ((x >= 1 && x <= 9)||(x >= 80 && x <= 90)) printf("Nije istina :("); // Ili staro i (! ((x >= 1 && x <= 9)||(x >= 80 && x <= 90))) kao uvijet
    else printf("Istina!");
    
    return 0;
}