/*

S tipkovnice učitati dva cijela broja. Na zaslon ispisati, ovisno o 
vrijednostima koje su učitane, jednu od sljedećih poruka:
brojevi su jednaki
prvi broj je veci od drugog
prvi broj je manji od drugog

*/

#include <stdio.h>

int main(void){

    int a, b;

    printf("Upisite dva broja: ");
    scanf("%d %d", &a, &b);
    if (a >= b){

        if (a == b) printf("Brojevi su jednaki");
        else printf("Prvi broj je veci od drugog");

    } else printf("Prvi broj je manji od drugog");

    return 0;
}