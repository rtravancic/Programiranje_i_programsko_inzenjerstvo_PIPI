/*

5. Napisati program koji pomoću funkcije fscanf čita realne brojeve iz tekstualne datoteke 
brojevi.txt, te po završetku čitanja (kada se dođe do kraja datoteke ili se pri čitanju 
dogodi pogreška) na zaslon ispisuje ili aritmetičku sredinu učitanih brojeva ili poruku "Nije 
procitan niti jedan broj". Npr. za sadržaj datoteke: 

*/



#include <stdio.h>
#include <stdlib.h>

int main(void){
    FILE *du;

    du = fopen("brojevi.txt", "r");

    float broj, suma = 0;
    int ukupno_brojeva = 0;

    while(fscanf(du, "%f", &broj) == 1) {
        suma += broj;
        ++ukupno_brojeva;
    }

    fclose(du);
    if (ukupno_brojeva > 0) printf("Aritmeticka sredina brojeva je: %f", suma / ukupno_brojeva );
    else printf("Nije procitan niti jedan broj.");
    

    return 0;

}