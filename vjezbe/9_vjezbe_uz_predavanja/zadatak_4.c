/*

4. Riješiti pomoću petlje s ispitivanjem uvjeta na početku. Izračunati i na zaslon ispisati 
sumu: 
1/1 - 1/2 + 1/3 - 1/4 + .... -1/1000

*/

#include <stdio.h>

int main(void){
    
    int i = 0;
    float rez = 0;

    while(i < 1000){
        i++;
        if (i%2 == 0) rez -= (1. / i);
        else rez += (1. / i);
    }

    printf("Rezultat: %f", rez);
    return 0;
}