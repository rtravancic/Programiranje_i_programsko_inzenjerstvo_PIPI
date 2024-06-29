#include <stdio.h>
#include "geom.h"


int main(void){
    tTocka t1, t2;

    printf("Unesite kordinate prve tocke(x, y): ");
    scanf("%lf %lf", &t1.x, &t1.y);
    printf("\nUnesite kordinate druge tocke(x, y): ");
    scanf("%lf %lf", &t2.x, &t2.y);

    printf("\n\nUdaljenost tocke (%.2lf, %.2lf) i (%.2lf, %.2lf) je: %.2lf", t1.x, t1.y, t2.x, t2.y, udaljToc(t1, t2));

    return 0;
}