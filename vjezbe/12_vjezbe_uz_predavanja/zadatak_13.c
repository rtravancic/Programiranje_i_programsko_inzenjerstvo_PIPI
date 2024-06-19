/*

13. Pomoću funkcije gets s tipkovnice učitati niz znakova koji sigurno nije dulji od 80 
znakova. Za svako malo slovo engleske abecede (znakovi a-z) ispisati koliko se puta 
pojavilo u učitanom nizu. 
slovo 'a' pojavilo se xx puta 
slovo 'b' pojavilo se xx puta 
slovo 'c' pojavilo se xx puta 
... 
slovo 'z' pojavilo se xx puta

*/

#include <stdio.h>
#define MAXSIZE 80

int main(void){

    char niz[MAXSIZE + 1];
    int i = 0;
    int abeceda[25] = {0};
    gets(niz);
    
    while(niz[i] != '\0'){
        if (niz[i] >= 97 && niz[i] <= 122){
            abeceda[(niz[i]) - 97] += 1;
        }
        i++;
    }
    for(i = 0; i<25; i++) printf("\nslovo \'%c\' pojavilo se %d puta ", i+97, abeceda[i]);
    return 0;
}
   
