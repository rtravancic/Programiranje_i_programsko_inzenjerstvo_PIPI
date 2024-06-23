/*

4. Korisnik odabire dimenzije matrice koju želi učitati (brRed, brStup). Broj redaka koje 
korisnik može učitati ne smije biti manji od 1 niti veći od 4, a broj stupaca ne smije biti 
manji od 1 niti veći od 5. S tipkovnice se učitaju vrijednosti elemenata matrice. Nakon 
toga u elemente u retku brRed zapisati sume stupaca, u elemente u stupcu brStup 
zapisati sume redaka, a u element (brRed,brStup) sumu svih elemenata matrice. 
Ispisati dobivenu matricu. Npr. ako je korisnik učitao: 
brRed=4, brStup=5, te elemente matrice: 
 1 2 3 4 5 
 2 1 3 7 1 
 8 1 1 4 3 
 4 2 2 3 3 
Nakon izračuna, ispis matrice izgleda ovako: 
 1 2 3 4 5 15
 2 1 3 7 1 14
 8 1 1 4 3 17
 4 2 2 3 3 14
 15 6 9 18 12 60
Zadatak riješite bez upotrebe pomoćnog polja.

*/



#include <stdio.h>
#define MAXRED 4
#define MAXSTUP 5

int main(void){

    int brRed, brStup, matrica[MAXRED + 1][MAXSTUP + 1] = {};
    int pom;
    int i, j;

    // Unos broja redaka
    do{
        printf("\nUpisite broj redaka iz intervala [1, 4]: ");
        scanf("%d", &brRed);
    } while(brRed < 1 || brRed > 4);

    // Unos broja stupaca
    do{
        printf("\nUpisite broj stupaca iz intervala [1, 5]: ");
        scanf("%d", &brStup);
    } while(brStup < 1 || brStup > 5);

    // Unos podataka u matricu
    for (i=0; i < brRed; i++){
        for(j=0; j < brStup; j++ ){
            printf("matrica[%d][%d] = ", i, j);
            scanf("%d", &matrica[i][j]);
        }
    }

    printf("\n\n");

    // Ispis pocetne matrice
    for (i=0; i < brRed; i++){

        for(j=0; j < brStup; j++){
            matrica[brRed][j] += matrica[i][j];
            matrica[i][brStup] += matrica[i][j];
            matrica[brRed][brStup] += matrica[i][j];
            printf("%d ", matrica[i][j]);
        }
        printf("\n");
    }

    printf("\n\n");
    // Ispis konacne matrice
    for (i=0; i <= brRed; i++){

        for(j=0; j <= brStup; j++){
            
            printf("%d ", matrica[i][j]);
        }
        printf("\n");
    }




    return 0;
}