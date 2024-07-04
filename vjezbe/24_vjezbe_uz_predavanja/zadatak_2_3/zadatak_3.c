/*

3. Slično kao u prethodnom zadatku. Funkcija broji kao argument prima tok podataka (tip 
podatka *FILE) koji je već otvoren za tekstualnu datoteku. Glavni program otvara tok 
podataka za postojeću tekstualnu datoteku, predaje ga funkciji, a kad funkcija obavi brojanje, 
glavni program ispisuje rezultat i zatvara tok podataka. 

*/


#include <stdio.h>
#include <stdlib.h>

#define SAMOGLASNIK(a) ((a) == 'a' || (a) == 'e' || (a) == 'i' || (a) == 'o' || (a) == 'u' || (a) == 'A' || (a) == 'E' || (a) == 'I' || (a) == 'O' || (a) == 'U' )


int brojiSamoglasnike_3(FILE *du){
    int c;
    int samoglasnici = 0;

    

    while((c = fgetc(du)) != EOF){ samoglasnici += SAMOGLASNIK(c);
    }
    
    return samoglasnici;
}

int main(void){
    FILE *du;
    
    du = fopen("ulaz.txt", "r");

    if(du == NULL){
        printf("Ne mogu otvoritit datoteku.");
        exit(-1);
    }

    printf("Poziva se fukcija brojiSamoglasnike_3 s ulazom \"ulaz.txt\"...\nUkupan broj samoglasnika je: %d", brojiSamoglasnike_3(du));
    fclose(du);

    return 0;
}