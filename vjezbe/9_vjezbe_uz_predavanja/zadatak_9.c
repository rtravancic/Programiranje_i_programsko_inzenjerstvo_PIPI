/*

9. Riješiti pomoću petlje s ispitivanjem uvjeta na početku. Načinite program za 
pretvaranje nenegativnog (to znači pozitivnog ili nule) cijelog dekadskog broja u 
heksadekadski oblik (uzastopnim dijeljenjem sa 16). Nije potrebno provjeravati je li 
učitani broj nenegativan. Znamenke heksadekadskog broja smijete ispisati 
"obrnutim" redoslijedom. Npr. za uneseni dekadski broj 725, program treba ispisati 
5D2. Za uneseni broj 0, program treba ispisati 0.

*/

#include <stdio.h>


int main(void){

    int broj;
    int ostatak;
    printf("Upisite nenegativan broj: ");
    scanf("%d", &broj);
    if (broj == 0) printf(0);

    while(broj != 0){
        ostatak = broj % 16;
        if (ostatak > 9){
            printf("%c", ostatak+55);
        }
        else printf("%d", ostatak);
        broj /= 16;
    }
    return 0;
}