/*
8. Napisati funkciju tablica koja u dvodimenzijsko cjelobrojno polje definirano u pozivajućem 
programu upisuje tablicu množenja od m redaka i n stupaca. 
Funkcija mora biti u stanju baratati s poljem proizvoljnih dimenzija. Npr. u glavnom programu 
može se definirati polje dimenzija 20x10, a zatim pozvati funkciju tako da se polje napuni 
tablicom množenja dimenzija 5x7; ista funkcija također mora na ispravan način generirati npr. 
tablicu množenja dimenzija 6x4 u polju koje je u glavnom programu definirano s dimenzijama 
30x20. 
U pozivajućem programu definirati polje, s tipkovnice učitati m i n (sigurno manji ili jednaki 
15), pozvati funkciju tablica, te na zaslon ispisati dobivenu tablicu množenja. Npr. tablica 
množenja od 3 retka i 4 stupca izgleda ovako: 
 1 2 3 4 
 2 4 6 8 
 3 6 9 12

*/


#include <stdio.h>

void multimatrix(int *p, int m, int n, int brstup){

    for(int i = 0; i < m; i++){

        for(int j = 0; j < n; j++){

            *(p + i * brstup + j) = (i + 1) * (j + 1);
        }
    }

}

int main(void){
    int polje1[20][10] = {0};
    int polje2[30][20] = {0};
    int m, n;

    printf("Unesite dimenziju m: ");
    scanf("%d", &m);

    printf("\nUnesite dimenziju n: ");
    scanf("%d", &n);

    multimatrix(&polje1[0][0], m, n, 10);


    printf("\n");
    for(int i = 0; i < 20*10; i++){
        if(*(&polje1[0][0] + i) != 0) printf("\t%d", *(&polje1[0][0] + i));

        if ((i + 1)% 10 == 0) printf("\n");
    }

    multimatrix(&polje2[0][0], m, n, 20);


    printf("\n\n");
    for(int i = 0; i < 30*20; i++){
        if(*(&polje2[0][0] + i) != 0) printf("\t%d", *(&polje2[0][0] + i));

        if ((i + 1)% 20 == 0) printf("\n");
    }


    
    return 0;
}