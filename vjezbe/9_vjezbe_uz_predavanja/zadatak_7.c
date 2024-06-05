/*

7. Riješiti pomoću petlje s ispitivanjem uvjeta na početku. S tipkovnice učitati cijeli broj 
n koji mora biti između 0 i 16 (uključivo s granicama). Ako broj nije ispravan, ispisati 
odgovarajuću poruku. Ako je broj ispravno upisan, učitati n binarnih znamenki i 
ispisati dekadski ekvivalent učitanog binarnog broja (ne primjenjuje se tehnika 
dvojnog komplementa, pa je dekadski ekvivalent sigurno pozitivan broj). 
 Npr., ako je korisnik upisao 
4 
1 
1 
0 
1 
program treba ispisati 13 (jer je 11012 = 1310). 
 Npr., ako je korisnik upisao 
0 
program treba ispisati 0.

*/

#include <stdio.h>
#include <math.h>


int main(void){

    int broj;
    int total = 0;
    int input;
    

    printf("Ucitajte broj od 0 do 16, ukljucivo: ");
    scanf("%d", &broj);

    if ( broj > 16 || broj < 0){
        printf("\nNije upisan ispravan broj...");
    } else {
        printf("Upisujte binarne znamenke:\n");
        while(broj > 0){
            scanf("%d", &input);
            total += input * pow(2, broj - 1);
            broj--;
        }
        printf("%d", total);
    }


    return 0;
}