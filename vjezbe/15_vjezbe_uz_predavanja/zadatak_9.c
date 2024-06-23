/*
9. Napisati funkciju koja na zaslon ispisuje prvih 20 Fibonaccijevih brojeva (svaki član niza u 
novi redak na zaslonu).

*/

#include <stdio.h>

void fib(void){
    int f, f_ = 1, f__ = 1;
    printf("%d\n%d\n", f_, f__);
    for(int i = 3; i <= 20; i++){
        f = f_ + f__;
        f__ = f_;
        f_ = f; 
        printf("%d\n", f);
    }
}


int main(void){
    fib();
    return 0;
}