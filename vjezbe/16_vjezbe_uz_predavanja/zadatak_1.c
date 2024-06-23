/*
1. Napisati funkciju koja za zadani cijeli broj n vraća n2
, ali tako da rezultat vraća preko adrese 
koju je dobila kao argument. Funkcija ne smije promijeniti stvarni argument n definiran u 
pozivajućem programu. Kojeg je tipa funkcija? 

*/
#include <stdio.h>

void specKvad(int n, int *rez){
    *rez = n*n;
    return;
}


int main(void){
    int rez, n;
    printf("Unesite broj koji zelite kvadrirati: ");
    scanf("%d", &n);
    specKvad(n, &rez);
    printf("Rezultat je: %d", rez);

    return 0;
}