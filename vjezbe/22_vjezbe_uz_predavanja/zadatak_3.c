/*

3. Napisati program kojim će se u dvodimenzijsko znakovno polje učitati tekst s tipkovnice. 
Svaki redak teksta treba učitati u zasebni redak polja. Učitavanje redaka teksta treba 
prekinuti kad se učita prazan redak ili se dođe do granice od najviše 10 dozvoljenih redaka. 
Može se računati da niti jedan redak teksta neće biti dulji od 80 znakova. Za čitanje teksta 
koristiti funkciju gets iz <stdio.h>. Na kraju, pomoću funkcije printf, na zaslon ispisati sve 
učitane retke teksta, svaki redak teksta u svom retku na zaslonu.  

*/

#include <stdio.h>
#include <stdlib.h>
#define MAXLEN 80
#define MAXRED 10

int main(void){
    char polje[MAXRED][MAXLEN + 1];


   
    int i = 0;
    while(i < 10){
      gets(&polje[i][0]); 
      if (polje[i][0] == '\0') break;
      ++i;
      
    }
    for(int j = 0; j < i; j++) printf("\n%s", polje[j]);
    return 0;
}