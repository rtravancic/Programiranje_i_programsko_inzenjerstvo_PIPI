/*

16. Napisati program kojim će se generirati 1000 slučajnih znakova čije su ASCII vrijednosti u 
intervalu [32,126]. Na zaslon ispisati koliko dobivenih znakova je slovo, koliko dobivenih 
znakova je znamenka, a koliko dobivenih znakova nije niti znamenka niti slovo. Za ispitivanje 
znakova koristite ugrađene macro definicije iz <ctype.h>.

*/


#include <stdio.h>
#include <ctype.h>
#include <time.h>
#include <stdlib.h>

#define BROJ_GEN 1000
#define ASCII_LOW 32
#define ASCII_HIGH 126

int main(void){
    int slovo = 0, broj = 0, ostalo = 0;
    int i = 0;
    int rez;
    srand((unsigned) time(NULL));
    while(i != BROJ_GEN){
        rez = rand()%(ASCII_HIGH - ASCII_LOW) + ASCII_LOW;
        if (isalpha(rez)) slovo++;
        else if (isdigit(rez)) broj++;
        else ostalo++;
        i++;
    }

    printf("\nBroj slova: %d\nBroj brojeva: %d \nBroj ostalih: %d", slovo, broj, ostalo);
    return 0;
}