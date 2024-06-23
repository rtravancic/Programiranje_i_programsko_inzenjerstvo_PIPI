/*

3. Korisnik odabire dimenzije matrice koju želi učitati (brRed, brStup). Broj redaka koje 
korisnik može učitati ne smije biti manji od 1 niti veći od 20, a broj stupaca ne smije 
biti manji od 1 niti veći od 10. U matricu treba učitati vrijednosti elemenata i ispisati 
matricu. Nakon toga treba retke matrice posmaknuti prema gore: redak i dobiva 
vrijednosti iz retka i+1, a posljednji redak matrice dobiva vrijednosti 0-tog retka. Npr. 
ako je korisnik učitao: brRed=4, brStup=5, te elemente matrice: 
1 2 3 4 5 
2 1 3 7 1 
8 1 1 4 3 
4 2 2 3 3 
nakon posmaka redaka, matrica treba izgledati ovako: 
2 1 3 7 1 
8 1 1 4 3 
4 2 2 3 3 
1 2 3 4 5 
Nakon obavljenog posmaka redaka, ispisati novu matricu. Zadatak riješite bez 
upotrebe pomoćnog polja.

*/

#include <stdio.h>
#define MAXRED 20
#define MAXSTUP 10

int main(void){

    int brRed, brStup, matrica[MAXRED][MAXSTUP];
    int pom;
    int i, j;
    do{
        printf("\nUpisite broj redaka iz intervala [1, 20]: ");
        scanf("%d", &brRed);
    } while(brRed < 1 || brRed > 20);


    do{
        printf("\nUpisite broj stupaca iz intervala [1, 10]: ");
        scanf("%d", &brStup);
    } while(brStup < 1 || brStup > 10);

    for (i=0; i < brRed; i++){
        for(j=0; j < brStup; j++ ){
            printf("matrica[%d][%d] = ", i, j);
            scanf("%d", &matrica[i][j]);
        }
    }

    printf("\n\n");

    for (i=0; i < brRed; i++){

        for(j=0; j < brStup; j++){

            printf("%d ", matrica[i][j]);
        }
        printf("\n");
    }

    for(i = 0; i < brStup; i++){
        pom = matrica[0][i];
        for(j = 0; j < brRed - 1; j++){
            
            matrica[j][i] = matrica[j+1][i];
        }

        matrica[brRed-1][i] = pom;
    }

    printf("\n");
    for (i=0; i < brRed; i++){

        for(j=0; j < brStup; j++){

            printf("%d ", matrica[i][j]);
        }
        printf("\n");
    }

    return 0;
}