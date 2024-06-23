/*

3. Napišite funkciju tipa double koja za zadanu vrijednost tipa double vraća zadanu vrijednost 
(tipa double) uvećanu za 10.0. Hoćete li dobiti ispravan rezultat ako funkciju pozovete sa 
stvarnim argumentom tipa int?

*/
#include <stdio.h>
double uvecaj(double n){
    return n + 10.0;
}


int main(void){
    int n;
    double nd;
    printf("Unesite int vrijednost: ");
    scanf("%d", &n);
    printf("Unesite double vrijednost: ");
    scanf("%lf", &nd);
    printf("\nRezultat za int vrijednost %d : %lf", n, uvecaj(n));
    printf("\nRezultat za double vrijednost %lf : %lf", nd, uvecaj(nd));

    return 0;
}