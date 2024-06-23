/*

5. S tipkovnice upisati cijeli broj n iz intervala [5, 10]. Generirati kvadratnu matricu
dimenzija n x n kojoj su svi elementi glavne i sporedne dijagonale, elementi prvog i 
zadnjeg retka, te prvog i zadnjeg stupca postavljeni na vrijednost 1, a svi ostali 
elementi matrice postavljeni na vrijednost 8. Generiranu matricu ispisati na zaslon. 
Npr. ako korisnik preko tipkovnice za n unese broj 7, na zaslon treba ispisati: 
1 1 1 1 1 1 1 
1 1 8 8 8 1 1 
1 8 1 8 1 8 1 
1 8 8 1 8 8 1 
1 8 1 8 1 8 1 
1 1 8 8 8 1 1 
1 1 1 1 1 1 1

*/


#include <stdio.h>
#define MAXX 10
#define MINN 5

int main(void){

    int matrica[MAXX][MAXX] = {0};
    int dim, i, j;
    do{
        printf("\nUpisite dimenziju kvadraten matrica iz intervala [5, 10]: ");
        scanf("%d", &dim);
    } while (dim < 5 || dim > 10);


    for (i = 0; i < dim; i++){
        for (j = 0; j < dim; j++){
            if (i == j || i %(dim-1) == 0 || j %(dim-1) == 0 || (i+j) == dim-1) matrica[i][j] = 1;
            else matrica[i][j] = 8;
        }
    }

    printf("\n\n");

    for (i = 0; i < dim; i++){
        for (j = 0; j < dim; j++){
            printf("%d ", matrica[i][j]);
        }
        printf("\n");
    }


   
    

    return 0;
}