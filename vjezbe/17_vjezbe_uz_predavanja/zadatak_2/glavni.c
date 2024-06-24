#include <stdio.h>
#include "mat2.h"


int main(void){

    printf("Rezultat factorial(0)\t%d", factorial(0));
    printf("\nRezultat factorial(25)\t%d", factorial(25));
    printf("\nRezultat factorial(26)\t%d", factorial(26));
    printf("\nRezultat binCoeff(13, 3) \t%d", binCoeff(13, 3));
    printf("\nRezultat binCoeff(4, 4) \t%d", binCoeff(4, 4));
    printf("\nRezultat iabsolute(-5) \t%d", iabsolute(-5));
    printf("\nRezultat iabsolute(0) \t%d", iabsolute(0));
    printf("\nRezultat iabsolute(-5.7f) \t%d", iabsolute(-5.7f));
    printf("\nRezultat fabsolute(-5)  \t%f", fabsolute(-5) );
    printf("\nRezultat fabsolute(-5.7f) \t%f", fabsolute(-5.7f));
    

    return 0;
}