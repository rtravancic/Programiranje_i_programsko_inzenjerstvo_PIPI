/*

6. Napisati funkciju koja na zaslon ispisuje sve pozitivne parne brojeve između 2 i zadanog 
cijelog broja n (u obliku 2 4 6 8 ...). Kojeg je ta funkcija tipa?

*/


#include <stdio.h>

void printparno(int n){
    for(int i = 2; i <= n; i += 2) printf("%d ", i);
}


int main(void){
    int broj;
    printf("Unesite pozitivan cijeli broj: ");
    scanf("%d", &broj);
    printparno(broj);

    return 0;
}