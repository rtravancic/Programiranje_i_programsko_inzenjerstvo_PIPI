/*

8. Napisati funkciju tipa double naziva nfakt za računanje n!. Napisati funkciju tipa double 
naziva mpovrhn za računanje m povrh n koja će za izračunavanje koristiti funkciju nfakt. U 
glavnom programu (main funkciji) učitavati s tipkovnice cijele brojeve m i n dok god su 
ispravno zadani, te izračunavati i ispisivati m povrh n. Prekinuti program kad se zadaju 
pogrešne vrijednosti za m i n. 

*/


#include <stdio.h>

double nfakt(int n){
    int i;
    double rez = 1;
    for (i = 1; i <= n; i++) rez *= i;
    return rez;
}


double mpovrhn(int m, int n){
    return nfakt(m) / (nfakt(n) * nfakt(m-n));

}


int main(void){
    int m, n;

    do{
        printf("\n\nUnesite broj m u m povrh n: ");
        scanf("%d", &m);
        printf("Unesite broj n u m povrh n: ");
        scanf("%d", &n);
        if (m > n && n >= 0) printf("Rezultat m povrh n: %f", mpovrhn(m, n));
        
    } while(m >= n && n >= 0);

    printf("\nIzvodjenje gotovo...");


    return 0;
}