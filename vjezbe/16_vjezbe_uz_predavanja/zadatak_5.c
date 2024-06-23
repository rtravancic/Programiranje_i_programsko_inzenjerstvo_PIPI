/*

5. Napišite funkciju koja za dvije zadane vrijednosti tipa int u pozivajući program vraća dvije 
vrijednosti: prva vraćena vrijednost je veća među zadanim vrijednostima, a druga vraćena 
vrijednost je manja među zadanim vrijednostima. Npr. ako se funkciji zadaju vrijednosti 2 i 
3*2, funkcija u pozivajući program mora vratiti vrijednosti 6 i 2.

*/

#include <stdio.h>

void vecemanje(int prvi, int drugi, int *veci, int *manji){
    if (prvi > drugi){
        *veci = prvi;
        *manji = drugi;
    } 
    else{
        *veci = drugi;
        *manji = prvi;
    }
    if (prvi == drugi) printf("\nBrojevi su jednaki!");
    return;
}


int main(void){
    int prvi, drugi, veci, manji;
    printf("Upisite prvi broj: ");
    scanf("%d", &prvi);
    printf("Upisite drugi broj: ");
    scanf("%d", &drugi);

    vecemanje(prvi, drugi, &veci, &manji);
    if (prvi != drugi) printf("Veci broj je %d, a manji broj je %d", veci, manji);

    return 0;
}