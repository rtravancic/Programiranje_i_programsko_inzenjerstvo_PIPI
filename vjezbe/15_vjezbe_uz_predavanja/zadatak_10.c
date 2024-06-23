/*
10. Napisati funkciju koja na zaslon ispisuje prvih n (n se zadaje kao argument funkcije) 
Fibonaccijevih brojeva (svaki član niza u novi redak na zaslonu).

*/

#include <stdio.h>

void fib(int n){
    int f, f_ = 1, f__ = 1;
    printf("%d\n%d\n", f_, f__);
    for(int i = 3; i <= n; i++){
        f = f_ + f__;
        f__ = f_;
        f_ = f; 
        printf("%d\n", f);
    }
}


int main(void){
    int n;
    printf("Unesite broj n za izracun Fibbonaccijevih brojeva: ");
    scanf("%d", &n);
    fib(n);
    return 0;
}