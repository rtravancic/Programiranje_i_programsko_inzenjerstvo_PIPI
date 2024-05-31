/*

Programski zadatak
• u varijablu x s tipkovnice učitati realni broj. Ako je recipročna
vrijednost za x definirana, na zaslon ispisati sadržaj varijable x, 
izračunati i zatim na zaslon ispisati recipročnu vrijednost od 

*/

#include <stdio.h>

int main(void){
    float x;

    printf("Ucitajte realan broj: ");
    scanf("%f", &x);

    if (x != 0){
        printf("Broj x je: %f\nReciprocan broj od x je: %f", x, 1/x);
    }
    return 0;
}