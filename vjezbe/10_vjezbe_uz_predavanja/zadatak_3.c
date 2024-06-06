/*

3. S tipkovnice učitati cijeli broj n koji mora biti između 0 i 16 (uključivo s granicama). 
Ako broj nije ispravan, ispisati odgovarajuću poruku. Nakon toga učitati n binarnih 
znamenki i ispisati dekadski ekvivalent učitanog binarnog broja (ne primjenjuje se 
tehnika dvojnog komplementa, pa je dekadski ekvivalent sigurno pozitivan broj). 
 Npr., ako je korisnik upisao 
4 
1 
1 
0 
1 
program treba ispisati 13. 
 Npr., ako je korisnik upisao 
0 
program treba ispisati 0. 
 
Riješiti pomoću petlje s poznatim brojem ponavljanja. Je li bolje ovaj zadatak 
rješavati pomoću petlje s poznatim brojem ponavljanja ili pomoću petlje s 
ispitivanjem uvjeta na početku?

*/

#include <stdio.h>
#include <math.h>

int main(void){
    int broj;
    int total = 0;
    int bin;

    printf("\nUpisite broj(0-16): ");
    scanf("%d", &broj);
    if (broj >= 0 && broj <= 16){
        while(broj > 0){
            printf("\nUnesite binarnu znamenku: ");
            scanf("%d", &bin);
            total += bin * pow(2, --broj);
            
        }
        printf("\nDekadski ekvivalent je broj: %d", total);

    } else printf("\nUnesen je neispravan broj.");
    
    
    return 0;
}