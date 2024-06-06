/*

1. Dopunsko objašnjenje primjera s predavanja 
Primjer: Napisati program koji će ispisivati prvih N Fibonaccijevih brojeva 
Potrebno je uočiti da za računanje člana niza fi, treba poznavati članove niza fi-1 i fi-2. U 
svakom koraku petlje u kojem se računa član niza fi, iskoristit će se članovi fi-1 i fi-2, a 
zatim će se pripremiti "nove" vrijednosti za fi-1 i fi-2, tako što će se stari član fi-1 zapisati u 
član fi-2, a netom izračunati član fi zapisati u član fi-1. 
U programu se član fi čuva u varijabli f, član fi-1 u varijabli f1, a član fi-2 u varijabli f0. 
Naredbom za selekciju osigurava se da se članovi počinju izračunavati prema opisanom 
principu tek nakon što se obavi ispis članova niza f0 i f1.

*/


#include <stdio.h>

int main(void){
    int f_1 = 1, f_2 = 1, f, N;

    printf("Unesite broj N: ");
    scanf("%d", &N);
    printf("F0 = %d\n", f_1);
    printf("F1 = %d\n", f_2);
    for(int i=2; i <= N; i++){
        f = f_1 + f_2;
        f_2 = f_1;
        f_1 = f;
        printf("F%d = %d\n", i, f);

    }


    return 0;
}