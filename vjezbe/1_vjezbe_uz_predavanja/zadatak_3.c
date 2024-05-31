/*

3. S tipkovnice učitati cijeli broj i zatim na zaslon ispisati poruku: 
ucitan je broj xxxxx 
Ako je učitan negativan broj, ispisati: 
broj je negativan 
Nakon toga (bez obzira je li učitani broj negativan) ispitati parnost učitanog broja i 
ispisati odgovarajuću poruku: 
broj je paran 
ili 
broj je neparan

*/

#include <stdio.h>

int main(void){
    int integer;

    printf("Upisite cijeli broj: ");
    scanf("%5d", &integer);

    printf("\nUcitan je broj: %d\n", integer);
    
    if (integer < 0 ){
        printf("Ucitan je negativan broj!\n");
    }

    if (integer%2 == 1){
        printf("Broj je paran.\n");
    } else {
        printf("Broj je neparan.\n");
    }


    return 0;
}