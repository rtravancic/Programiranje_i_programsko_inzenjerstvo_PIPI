/*

1. Napišite program koji na zaslon ispisuje poruku 
Upisite jedan pozitivni cijeli broj: 
i nakon toga preko tipkovnice učita jedan cijeli broj. Ako je broj ispravno upisan (tj. 
učitan je pozitivan broj), na zaslon treba ispisati: 
Zadnja znamenka broja xxxxx je x 
inače, ako je učitan negativan broj ili nula, na zaslon ispisati 
Broj xxxxx nije pozitivan broj 

Uputa: kojim brojem n treba podijeliti broj m da bi se kao ostatak dijeljenja dobila 
zadnja (krajnje desna) znamenka broja m? Postoji li u programskom jeziku C 
aritmetička operacija kojom se izračunava ostatak cjelobrojnog djeljenja? -> postoji mod10 :)

*/

#include <stdio.h>

int main(void){
    int input;

    printf("Upisite jedan pozitivni cijeli broj:");
    scanf("%d", &input);

    if  (input > 0){
        printf("Zadnja znamenka broja %d je %d", input, input%10);
        } else {
            printf("Broj %d nije pozitivan broj.", input);
    }

    return 0;
}

