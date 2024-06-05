/*

12. Riješiti pomoću petlje s ispitivanjem uvjeta na kraju (do-while). Usporediti s rješenjem 
u kojem se koristila petlja s ispitivanjem uvjeta na početku. Izračunati i na zaslon 
ispisati sumu:

1/1 - 1/2 + 1/3 - .... -1/1000

*/

#include <stdio.h>

int main(void){
    float total = 0;
    int iter = 1;

    do{
    
        total += (( 1./iter) * (iter%2 == 0 ? -1:1));
        
    } while(iter++ <= 1000);
    
    printf("Total: %f", total);
    return 0;
}