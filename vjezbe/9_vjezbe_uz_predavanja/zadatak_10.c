/*

10. Riješiti pomoću petlje s ispitivanjem uvjeta na početku. Isto kao prethodni zadatak, 
ali za učitani dekadski broj treba ispisati oktalni broj. 

*/


#include <stdio.h>


int main(void){

    int broj;
    int ostatak;
    printf("Upisite nenegativan broj: ");
    scanf("%d", &broj);
    if (broj == 0) printf(0);

    while(broj != 0){
        ostatak = broj % 8;

        printf("%d", ostatak);
        broj /= 8;
    }
    return 0;
}