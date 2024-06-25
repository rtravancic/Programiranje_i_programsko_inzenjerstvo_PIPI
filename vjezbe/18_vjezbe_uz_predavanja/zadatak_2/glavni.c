#include <stdio.h>
#include "toaps.h"

int main(void){
    int test1[] = {1 , 2, 3, 4, -5};
    int test2[] = {-2, 4, -99, 0};

    printf("\nOrginalno polje: ");
    for(int i = 0; i <= 4; i++) printf("%d ", *(test1 + i));
    printf("\nPolje nakon poziva: ");
    toApsDim(test1, 5);
    for(int i = 0; i <= 4; i++) printf("%d ", *(test1 + i));

    printf("\nOrginalno polje: ");
    for(int i = 0; i <= 3; i++) printf("%d ", *(test2 + i));
    printf("\nPolje nakon poziva: ");
    toApsDim(test2, 4);
    for(int i = 0; i <= 3; i++) printf("%d ", *(test2 + i));


    return 0;
}