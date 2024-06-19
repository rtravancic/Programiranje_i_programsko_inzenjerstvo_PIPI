/*

2. S tipkovnice učitati 10 cijelih brojeva u polje, poredak članova obrnuti unutar polja. 
Nakon što se poredak članova u polju promijeni, ispisati novi sadržaj polja. Npr. ako 
su u polje učitani brojevi 
 1 3 5 7 9 11 13 15 17 19 
 njihov redoslijed u polju treba promijeniti tako da su članovi polja sljedeći: 
 19 17 15 13 11 9 7 5 3 1

*/

#include <stdio.h>

#define DULJINA 10

int main(void){

    int polje[DULJINA];
    int broj;

    for(int i = 0; i < DULJINA; i++){

        printf("\nUcitajte broj: ");
        scanf("%d", &polje[i]);
    }

    for(int i = 0; i < (DULJINA/2); i++) {
        broj = polje[i];
        polje[i] = polje[DULJINA - 1 -i];
        polje[DULJINA - 1 - i] = broj;
        
    }

    for(int i = 0; i < DULJINA; i++) printf("%d", polje[i]);
    
    return 0;
}