/*

5. Napisati C program koji će s tipkovnice učitati dva znaka u varijable c1 i c2 tipa char. 
Ako su oba učitana znaka velika slova abecede (A-Z) i pri tome su oba znaka 
samoglasnici, ispisati tekst Ucitani znakovi su "veliki" samoglasnici
(primijetite da unutar teksta treba dva puta ispisati i dvostruke navodnike). 

*/

#include <stdio.h>

int main(void){

    char c1, c2;

    printf("Ucitajte dva znaka s tipkovnice: ");
    scanf("%c %c", &c1, &c2);

    if  (((c1 == 'A' || 
                c1 == 'E' || 
                c1 == 'I' || 
                c1 == 'O' || 
                c1 == 'U') 
                && 
                (c2 == 'A' || 
                c2 == 'E' || 
                c2 == 'I' || 
                c2 == 'O' || 
                c2 == 'U'))) 
                printf("Ucitani zankovi su \"veliki\" samoglasnici");


    return 0;
}