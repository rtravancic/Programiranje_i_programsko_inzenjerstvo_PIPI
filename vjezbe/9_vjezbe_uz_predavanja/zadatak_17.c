/*

17. Napišite program koji s tipkovnice učitava dva znaka te ispisuje sve znakove ASCII 
tablice koji se nalaze između ta dva znaka. Npr., ako se učitaju znakovi d i k, 
program ispisuje defghijk.

*/

#include <stdio.h>

int main(void){

    char c1, c2;
    int min, maks;

    printf("Upisite dva ASCII znaka: ");
    scanf("%c %c", &c1, &c2);
    min = c1 > c2 ? c2:c1;
    maks = (c1 * c2) / min;

    while(min <= maks){
        printf("%c", min++);
    }



    return 0;
}