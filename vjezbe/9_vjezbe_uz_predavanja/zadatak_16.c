/*

16. S tipkovnice učitavati cijele brojeve dok god ne bude upisan broj manji ili jednak nuli. 
Na zaslon ispisati sumu učitanih pozitivnih brojeva podijeljenu s najvećim do tada 
učitanim pozitivnim brojem i pomnoženu s najmanjim do tada učitanim pozitivnim 
brojem. Ako nije upisan niti jedan pozitivni broj, ispisati odgovarajuću poruku. 
Primjer: ako korisnik utipka brojeve 2 5 3 2 2 -22, program treba ispisati 
5.600000

*/

#include <stdio.h>

int main(void){

    float suma = -1;
    int broj = 1;
    int maks = 1;
    int min = 1;

    do{
        suma += broj;
        printf("\nUnesite broj: ");
        
        if (broj > maks) maks = broj;
        if (broj < min) min = broj;
        scanf("%d", &broj);

    } while(broj > 0);
    
    printf("Rez je: %f", (suma*min)/maks);
    return 0;
}