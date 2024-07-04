/*

4. Prepraviti rješenje zadatka 8. (ispis tablice množenja) iz prethodnih vježbi uz predavanja. 
Tablicu množenja, umjesto na zaslon, treba zapisati u tekstualnu datoteku čije ime treba 
učitati s tipkovnice. Editorom (npr. notepad) provjeriti sadržaj dobivene datoteke. 


8. Napisati program koji će s tipkovnice pročitati cijeli broj broj n (1 ≤ n ≤ 15). Program treba na 
zaslon ispisati "tablicu množenja". Npr. za zadani n=12, ispis na zaslon treba izgledati ovako: 
Tablica mnozenja 12x12 
 1 2 3 4 5 6 7 8 9 10 11 12 
----+------------------------------------------------ 
 1! 1 2 3 4 5 6 7 8 9 10 11 12 
 2! 2 4 6 8 10 12 14 16 18 20 22 24 
 3! 3 6 9 12 15 18 21 24 27 30 33 36 
 4! 4 8 12 16 20 24 28 32 36 40 44 48 
 5! 5 10 15 20 25 30 35 40 45 50 55 60 
 6! 6 12 18 24 30 36 42 48 54 60 66 72 
 7! 7 14 21 28 35 42 49 56 63 70 77 84 
 8! 8 16 24 32 40 48 56 64 72 80 88 96 
 9! 9 18 27 36 45 54 63 72 81 90 99 108 
 10! 10 20 30 40 50 60 70 80 90 100 110 120 
 11! 11 22 33 44 55 66 77 88 99 110 121 132 
 12! 12 24 36 48 60 72 84 96 108 120 132 144 
----+------------------------------------------------ 
Npr. za zadani n=1, ispis na zaslon treba izgledati ovako: 
Tablica mnozenja 1x1 
 1 
----+---- 
 1! 1 
----+----

*/


#include <stdio.h>
#include <stdlib.h>
#define LOW 1
#define HIGH 15



int main(void){

    FILE *di;
    di = fopen ("nova.txt", "w");

    int n, row[HIGH];
    int i, j;
    
    printf("Unesite broj n u intervalu [1, 15]: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) row[i] = i + 1;

    for(j = 0; j <= n; j++){
        if (j == 0) fprintf(di, "    ");
        else fprintf(di, "%4d", j);
    }
    fprintf(di, "\n");

    for(j = 0; j <= n; j++){
        fprintf(di, "----");
        if (j == 0) fprintf(di, "+");
    }

    fprintf(di, "\n");

    for(i = 0; i < n; i++){
        fprintf(di, "%4d!", row[i]);
        for(j = 0; j < n; j++) fprintf(di, "%4d", row[j]*(i+1));
        fprintf(di, "\n");
    }

    for(j = 0; j <= n; j++){
            fprintf(di, "----");
            if (j == 0) fprintf(di, "+");
        }

    return 0;
    
}
