/*

6. Napišite funkciju koja vrijednosti u zadanim varijablama x, y i z (tipa double) poredava po 
veličini, od najveće prema najmanjoj. Drugim riječima, očekuje se da će funkcija zamijeniti 
vrijednosti u varijablama x, y i z tako da vrijednosti budu poredane od najveće prema 
najmanjoj. Npr. ako se funkcija pozove za varijable x=2.0, y=4.0, z=3.0, nakon izvršavanja 
funkcije u varijablama x, y, z se moraju nalaziti vrijednosti x=4.0, y=3.0, z=2.0.

*/

#include <stdio.h>

void poredaj(double *x, double *y, double *z){
    double x1, y1, z1;
    x1 = *x > *y ? *x : *y;
    x1 = x1 > *z ? x1 : *z;

    z1 = *x < *y ? *x : *y;
    z1 = z1 < *z ? z1 : *z;
    
    y1 = *x < x1 && *x > z1 ? *x : (*y < x1 && *y > z1 ? *y : *z);
    
    *x = x1;
    *y = y1;
    *z = z1;
}


int main(void){
    double x, y, z;
    printf("Ucitajte vrijednost x: ");
    scanf("%lf", &x);

    printf("Ucitajte vrijednost y: ");
    scanf("%lf", &y);

    printf("Ucitajte vrijednost z: ");
    scanf("%lf", &z);

    poredaj(&x, &y, &z);

    printf("\nRezultat:\t x = %lf\ty = %lf\tz = %lf", x, y, z);

    return 0;
}


    