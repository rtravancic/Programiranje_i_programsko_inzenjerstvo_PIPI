/*

8. Riješiti pomoću petlje s ispitivanjem uvjeta na početku. Načinite program za 
izračunavanje n!. Vrijednost za n učitati s tipkovnice. Ako broj nije ispravan (mora biti 
cijeli broj veći ili jednak 0), ispisati odgovarajuću poruku.

*/

#include <stdio.h>

int main(void){
    int n;
    int fact = 1;

    printf("Ucitajte broj n za izracunavanje faktorijela: ");
    scanf("%d", &n);

    if (n < 0){
        printf("\nNije upisan regularan broj.");
    } else {
        while (n > 1) fact *= n--;
        printf("Rezultat je: %d", fact);
    }
    
    return 0;
}