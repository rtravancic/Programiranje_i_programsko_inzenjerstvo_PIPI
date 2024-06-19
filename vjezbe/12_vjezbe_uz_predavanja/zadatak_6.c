/*

6. Pomoću funkcije gets učitajte s tipkovnice niz znakova koji sigurno nije dulji od 30 
znakova. Izračunajte i ispišite koliko u učitanom nizu ima samoglasnika, koliko 
suglasnika, a koliko ostalih znakova. 
Primjer: 
ako korisnik upiše sljedeći niz: printf("%s", "Ana");<Enter> na zaslon treba 
ispisati: 
Samoglasnika: 3 
Suglasnika: 7 
Ostalih: 10 

*/


#include <stdio.h>
#define DULJINA 30
int main(void){

    char  niz[DULJINA];
    int samoglasnici = 0, suglasnici = 0, ostali = 0;
    printf("Upisite niz: ");
    gets(niz);

    int i = 0;

    while (niz[i] != '\0'){
        if ((niz[i] == 'a') || (niz[i] == 'e') || (niz[i] == 'i') || (niz[i] == 'o') || (niz[i] == 'u') ||
            (niz[i] == 'A') || (niz[i] == 'E') || (niz[i] == 'I') || (niz[i] == 'O') || (niz[i] == 'U')) samoglasnici++;

        else if ((niz[i] >= 65 && niz[i] <= 90) || (niz[i] >= 97 && niz[i] <= 122)) suglasnici++;

        else ostali++;

        i++;

    }

    printf("\nSamoglasnici:\t%d\nSuglasnici:\t%d\nOstali:\t%d", samoglasnici, suglasnici, ostali);



    return 0;
}