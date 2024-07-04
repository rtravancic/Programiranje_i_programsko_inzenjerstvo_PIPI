/*

2. Napisati funkciju broji koja kao argument prima niz znakova koji predstavlja ime 
tekstualne datoteke (tip podatka char *). Funkcija treba otvoriti tok podataka za čitanje iz 
datoteke sa zadanim imenom (tj. "otvoriti datoteku"), prebrojati samoglasnike (broje se i 
"mali" i "veliki" samoglasnici), zatvoriti tok podataka (tj. "zatvoriti datoteku"), te u pozivajući 
program vratiti broj samoglasnika. Ako funkcija ne uspije otvoriti datoteku, kao broj 
samoglasnika vraća -1. Za čitanje znakova iz datoteke treba koristiti funkciju fgetc. Pomoću 
editora (npr. notepad) prirediti jednu tekstualnu datoteku, te napisati glavni program kojim će 
se testirati rad funkcije. 

*/

#include <stdio.h>
#include <stdlib.h>

#define SAMOGLASNIK(a) ((a) == 'a' || (a) == 'e' || (a) == 'i' || (a) == 'o' || (a) == 'u' || (a) == 'A' || (a) == 'E' || (a) == 'I' || (a) == 'O' || (a) == 'U' )


int brojiSamoglasnike(char *ime){
    FILE *du;
    int c;
    int samoglasnici = 0;

    du = fopen(ime, "r");

    if(du == NULL){
        printf("Ne mogu otvoritit datoteku %s", *ime);
        return -1;
    }

    while((c = fgetc(du)) != EOF){ samoglasnici += SAMOGLASNIK(c);

    }
    fclose(du);
    return samoglasnici;
}

int main(void){
    printf("Poziva se fukcija brojiSamoglasnike s ulazom \"ulaz.txt\"...\nUkupan broj samoglasnika je: %d", brojiSamoglasnike("ulaz.txt"));
    return 0;
}