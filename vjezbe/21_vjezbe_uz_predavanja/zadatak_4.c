/*

4. Napisati funkciju koja u zadano dvodimenzijsko cjelobrojno polje "ispaljuje zadani broj 
hitaca". Element polja u kojeg pojedini hitac pogađa odabire se na slučajan način (funkcija na 
slučajan način odabere redak elementa, a zatim na slučajan način odabere stupac 
elementa). Vrijednost elementa polja koji je "pogođen", funkcija uvećava se za jedan. 
Funkcija treba inicijalizirati generator pseudoslučajnih brojeva samo pri prvom pozivu, a prije 
nego počne "gađati" polje, mora elemente polja inicijalizirati na vrijednost 0. 
U glavnom programu definirati polje maksimalnih dimenzija 10x10, s tipkovnice učitati m i n, 
te "broj "hitaca h koje u polje dimenzija mxn funkcija treba "ispaliti". Pozvati funkciju te u 
obliku tablice ispisati sadržaj polja nakon što je "pogođeno" s h hitaca, a zatim u nastavku 
programa to ponoviti (s istim argumentima). 
Što će se dogoditi ako funkciju prepravite tako da se generator pseudoslučajnih brojeva 
inicijalizira pri svakom pozivu funkcije? Zašto se tada (u najvećem broju slučajeva) dobiju 
dva jednaka polja? 

*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define MAXDIM 10

void ispaliHitce(int *p, int m, int n, int broj){

    // inicijalizacije generatora pseudoslucajnih brojeva  --> ako svaki put isto je vrijeme poziva pa se generiraju isti brojevi
    static int i = 0;
    if (i == 0){
        i++;
        srand((unsigned) time(NULL));
    }

    // inicijalizacija mete
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++) *(p + i*MAXDIM + j) = 0;
    }

    while(broj-- > 0) *(p + (rand()%m)*MAXDIM + rand()%n) += 1;
}

int main(void){
    int m, n, broj;
    int meta[MAXDIM][MAXDIM] = {0};
    do{
        printf("\nUnesite velicinu polja (m, n): ");
        scanf("%d %d", &m, &n);
    } while(m < 0 || n < 0 || m > 10 || n > 10);

    printf("\nUnesite broj hitaca: ");
    scanf("%d", &broj);

    

    ispaliHitce(&meta[0][0], m, n, broj);
    printf("\n\nMeta nakon ispaljivanja hitaca:\n");
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++) printf("%d ",*(meta[0] + i*MAXDIM + j) );
        printf("\n");
    }


    ispaliHitce(&meta[0][0], m, n, broj);
    printf("\n\nMeta nakon ispaljivanja hitaca:\n");
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++) printf("%d ",*(meta[0] + i*MAXDIM + j) );
        printf("\n");
    }


    return 0;
}