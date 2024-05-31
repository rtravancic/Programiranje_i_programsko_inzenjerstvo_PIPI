/*

3. Napisati C program kojim će se s tipkovnice učitati pozitivni cijeli broj koji ima 5 
znamenaka. Nije potrebno provjeravati je li korisnik upisao ispravan broj. Program treba 
na zaslon ispisati drugu i četvrtu znamenku. 

*/
#include <stdio.h>

int main(void){
    int broj;
        printf("Upisite peteroznamenkasti broj: ");
        scanf("%d", &broj);
        printf("\nDruga znamenka: %d\nCetvrta znamenka: %d", (broj/1000)%10, (broj/10)%10);
        

    return 0;
}