/*

8. Ovaj zadatak je važan za razumijevanje funkcije fgets. U predavanjima prvo pažljivo pročitati 
što točno radi funkcija fgets. 
Uz pretpostavku da je sadržaj datoteke podaci.txt: 
što će biti sadržaj datoteke izlaz.txt nakon obavljanja sljedećeg programa: 


*/


#include <stdio.h> 
#include <stdlib.h> 
#define MAXLIN 7

int main (void) { 
    FILE *du, *di; 
    char linija[MAXLIN]; 

    du = fopen ("podaci.txt", "r"); 
    di = fopen ("izlaz.txt", "w"); 

    while (fgets(linija, MAXLIN, du) != NULL ) { 
        fputs (linija, di); 
    } 

    fclose (du); 
    fclose (di); 

    return 0; 
}