/*

6. S tipkovnice, uz kontrolu, učitati broj redaka m i broj stupaca n cjelobrojne matrice. 
Broj redaka mora biti iz intervala [3, 6], a broj stupaca iz intervala [4, 10]. Nakon toga 
učitati članove matrice. Jednodimenzijsko polje nps napuniti vrijednostima najmanjih 
članova matrice u pojedinim stupcima, a jednodimenzijsko polje npr napuniti 
vrijednostima najmanjih članova matrice u pojedinim retcima. Ispisati učitanu matricu, 
a zatim članove polja nps i članove polja npr. 
Primjer: ako je učitana matrica (m=4, n=5) 
 1 2 3 4 5 
 2 0 3 7 2 
 8 1 5 4 3 
 4 2 2 9 3 
program treba ispisati: 
matrica: 
 1 2 3 4 5 
 2 0 3 7 2 
 8 1 5 4 3 
 4 2 2 9 3 
polje nps: 
 1 0 2 4 2 
polje npr: 
 1 0 1 2

*/


#include <stdio.h>
#define MAXR 6
#define MINR 3
#define MAXS 10
#define MINS 4

int main(void){
    int brRed, brStup, matrica[MAXR][MAXS];
    int nps[MAXS], npr[MAXR];
    int i, j;
    
    do{
        printf("\nUpisite broj redaka iz intervala [%d, %d]: ", MINR, MAXR);
        scanf("%d", &brRed);
    } while(brRed < MINR || brRed > MAXR);


    do{
        printf("\nUpisite broj stupaca iz intervala [%d, %d]: ", MINS, MAXS);
        scanf("%d", &brStup);
    } while(brStup < MINS || brStup > MAXS);


    // Unos podataka u matricu
    for (i=0; i < brRed; i++){
        for(j=0; j < brStup; j++ ){

            printf("matrica[%d][%d] = ", i, j);
            scanf("%d", &matrica[i][j]);
        }
    }
    
    int minimum;
    for (i=0; i < brRed; i++){
        int minimum = matrica[i][0];
        for(j=0; j < brStup; j++ ){
            if (matrica[i][j] < minimum) minimum = matrica[i][j];
        }
        npr[i] = minimum;
    }

    
    for (i=0; i < brStup; i++){
        int minimum = matrica[i][0];
        for(j=0; j < brRed; j++ ){
            if (matrica[j][i] < minimum) minimum = matrica[j][i];
        }
        nps[i] = minimum;
    }


     // Ispis pocetne matrice
    for (i=0; i < brRed; i++){
        for(j=0; j < brStup; j++){
            printf("%d ", matrica[i][j]);
        }
        printf("\n");
    }

    printf("\nPolje npr:");
    // Ispis matrice npr
    for (i=0; i < brRed; i++){
        printf("%d ", npr[i]);
    }

    printf("\nPolje nps: ");
     // Ispis matrice nps
    for (i=0; i < brStup; i++){
        printf("%d ", nps[i]);
    }



    

    return 0;
}