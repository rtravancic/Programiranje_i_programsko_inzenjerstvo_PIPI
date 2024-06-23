/*
7. Napisati funkciju koja na zaslon ispisuje tablicu množenja za zadanih m redaka i n stupaca. 
Za ispis brojeva koristite format %5d. Npr. ispis za tablicu množenja od 3 retka i 4 stupca je: 
 1 2 3 4 
 1 1 2 3 4 
 2 2 4 6 8 
 3 3 6 9 12
*/

#include <stdio.h>

void tablicaMnozenja(int m, int n){
    int i,j;
    for(i = 0; i <= n; i++){
        if (i == 0) printf(" \t");
        else printf("%d\t", i);
    }
    printf("\n");
    for(i=1; i <= m; i++){
        printf("%d\t", i);
        for(j=1; j <= n; j++)  printf("%d\t", i*j);
        printf("\n");
    }
    
}



int main(void){
    int m, n;
    printf("Upisite prvu dimenziju tablice (m,n): ");
    scanf("%d", &m);
    printf("Upisite drugu dimenziju tablice (m,n): ");
    scanf("%d", &n);
    printf("\n");
    tablicaMnozenja(m,n);

    return 0;
}




