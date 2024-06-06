/*

6. Isto kao prethodni zadatak, ali učitani dekadski broj treba pretvoriti u heksadekadski.

*/
#include <stdio.h>

int main(void){

    unsigned int broj;
    int rez;
    int iter = 28;
    printf("Ucitajte broj iz intervala [0, 4294967295]: ");
    scanf("%u", &broj);

    while(iter >= 0){
        rez = ((broj >> iter) & 0xF);
        printf("%c", (rez > 9 ? (55 + rez) : (48 + rez)));
        iter -= 4;
       
    }

    return 0;
}