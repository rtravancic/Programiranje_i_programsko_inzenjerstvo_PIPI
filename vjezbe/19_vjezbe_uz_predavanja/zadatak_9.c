/*

9. Napišite funkciju transp za transponiranje cjelobrojne matrice od m redaka i n stupaca. 
Funkcija mora transponirati matricu, ali također i zamijeniti vrijednosti u varijablama m i n 
pozivajućeg programa u kojima su evidentirane dimenzije matrice. 
U funkciji definirajte, te za transponiranje koristite pomoćno polje. Ideja za korištenje 
pomoćnog polja: prepisati elemente mat[i][j] iz zadane matrice u elemente pom[j][i]
pomoćne matrice, a zatim svaki element pom[i][j] upisati natrag u element mat[i][j]. 
Jednako kao u prethodnom zadatku, funkcija mora biti u stanju baratati s poljem proizvoljnih 
dimenzija, uz ograničenje da zadano polje nikad neće imati dimenzije veće od 100x100. 
Treba napomenuti da je ovakvo rješenje (s pomoćnom matricom) dobro samo za vježbu.
Stoga načinite i bolju (tj. ispravnu) funkciju koja matricu transponira bez korištenja 
pomoćnog polja! Primjer transponiranja matrice bez korištenja pomoćnog polja prikazan je na 
predavanjima o dvodimenzijskim poljima.
*/

#include <stdio.h>

#define MAXL 100

void transp(int *p, int *m, int *n, int brstup){
    int pom[MAXL][MAXL];
    int i, j;
    int pomocna;

    for(i = 0; i < *m; i++){
        for (j = 0; j < *n; ++j){
            pom [j][i] = *(p + i * brstup + j);

        }
    }

    pomocna = *m;
    *m = *n;
    *n = pomocna;

    for (i = 0; i < *m; i++){
        for (j = 0; j < *n; j++){
            *(p + i*brstup + j) = pom[i][j];
        }
    }
}


int main(void){
    int m, n;
    int polje[MAXL][MAXL];
    int i, j; 


    printf ("Upisite m i n koji su manji ili jednaki %d i %d: ", MAXL, MAXL); 
    scanf("%d %d", &m, &n); 
    printf ("Upisite elemente matrice po retcima:\n"); 
    
    
    for (i = 0; i < m; ++i) {
        for (j = 0; j < n; ++j) scanf("%d", &polje[i][j]);
         }

    printf("\nSlijedi ispis originalne matrice\n\n");

    for (i = 0; i < m; ++i) {
        for (j = 0; j < n; ++j) printf("%d ", polje[i][j]); 
        printf("\n");
         }

    transp(&polje[0][0], &m, &n, MAXL);

    for (i = 0; i < m; ++i) {
        for (j = 0; j < n; ++j) printf("%d ", polje[i][j]); 
        printf("\n");
         }

    return 0;
}