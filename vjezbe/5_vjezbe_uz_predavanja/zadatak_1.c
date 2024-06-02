/*

1. Koje vrijednosti poprimaju varijable a, b nakon izvođenja sljedećeg programskog odsječka: 


Svoje rješenje provjerite tako da programski odsječak, dopunjen naredbom za ispis 
vrijednosti varijabli na zaslon i ostalim nužnim naredbama, izvedete na svom računalu
*/
#include <stdio.h>

int main(void){

    char a; 
    short int b; 
    a = 120; 
    b = 32000; 
    a = a + 10; 
    b = b + 1000; 
    printf("a=%d, b=%d", a, b);

    return 0;
}
