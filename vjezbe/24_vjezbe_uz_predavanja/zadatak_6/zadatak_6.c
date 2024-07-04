/*

6. U tekstualnu datoteku osobe.txt editorom upisati podatke o osobama (matični broj, ime, 
prezime i datum rođenja). Primjer sadržaja datoteke prikazan je ovdje:
952 Nikolina Medvedec 15.5.1989 
101 Iva Vurnek 17.6.1987 
412 Natalija Voras 11.6.1988 
551 Anatolij Ozimec 24.2.1989 
115 Franjo Zdilar 22.11.1986 
471 Ivana Suhina 8.6.1988 
Napisati program koji će na zaslon ispisati sve podatke o osobama iz datoteke osobe.txt
čije ime sadrži niz znakova na. Za datoteku iz primjera, program treba na zaslon ispisati 
sljedeće: 
952 Nikolina Medvedec 15.5.1989 
551 Anatolij Ozimec 24.2.1989 
471 Ivana Suhina 8.6.1988 

*/



#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){

    FILE *du;
    int mbr, dan, mjesec, godina;
    char ime[15 + 1], prez[15 + 1], tocka;


    du = fopen("osobe.txt", "r");

    while (fscanf(du, "%d%s%s%d%c%d%c%d", 
            &mbr, 
            ime, 
            prez, 
            &dan, 
            &tocka, 
            &mjesec, 
            &tocka, 
            &godina) == 8){
    
        if (strstr(ime, "na") != NULL) printf("%d %s %s %d.%d.%d\n", mbr, ime, prez, dan, mjesec, godina); 
    }   

    fclose (du); 
    return 0; 
}
