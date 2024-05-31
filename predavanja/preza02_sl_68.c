/*

Programski zadatak
• Na zaslon ispisati poruku Upisite cijeli broj
• Učitati cijeli broj s tipkovnice
• Izračunati apsolutnu vrijednost učitanog broja te na zaslon ispisati 
učitani broj i njegovu apsolutnu vrijednost u oblik
u
Apsolutna vrijednost od x je x

*/

#include <stdio.h>

int main(void){

    int broj, aps;
    printf("Upisite cijeli broj: ");
    scanf("%d", &broj);

    aps = broj;
    if (aps < 0){
        aps *= -1;
    }

    printf("Apsolutna vrijednost %d je %d", broj, aps);

    return 0;
}