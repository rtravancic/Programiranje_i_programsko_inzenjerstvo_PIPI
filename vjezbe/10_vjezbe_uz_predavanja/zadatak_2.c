/*

2. U varijablu tipa unsigned int učitati nenegativni cijeli broj. Na zaslon ispisati binarni 
sadržaj registra te varijable (binarne znamenke se moraju ispisati ispravnim 
redoslijedom). Za izdvajanje bitova koristiti operaciju broj & 2n
, pri čemu se n 
mijenja od 31 do 0 (može se pretpostaviti da se za pohranu int tipa podatka koristi 
32 bita). Uputa: vrijednost tipa podatka unsigned treba se učitati po formatu %u
 Primjer: ako je korisnik upisao broj 18, na zaslon treba ispisati 
 00000000000000000000000000010010

*/

#include <stdio.h>
#include <math.h>

int main(void){

    unsigned int  broj;
    printf("Unesite broj: ");
    scanf("%u", &broj);


    for (int i = 31; i>= 0; i--){
        printf("%d", (broj & (int)pow(2, i))> 0 ? 1:0);
    }
    return 0;
}