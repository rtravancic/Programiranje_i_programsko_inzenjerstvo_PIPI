/*

11. Napisati funkciju koja kao rezultat vraća koliko puta se niz s2 pojavljuje unutar niza s1. U 
glavnom programu pomoću funkcije gets učitati dva niza, pozvati funkciju i ispisati rezultat. U 
funkciji je dopušteno koristiti funkcije iz biblioteke <string.h>.

*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXLEN 40

int ponavljanjeNiza(char *s1, char *s2){
    int ponavljanje = 0;
    
    while(1){
        
        if ((s1 = strstr(s1, s2) ) != NULL){
            ponavljanje++;
            s1++;
            
        } else break;
    }

    return ponavljanje;
}


int main(void){
    char s1[MAXLEN + 1], s2[MAXLEN + 1];
    printf("Upisite prvi niz: ");
    gets(s1);
    printf("\nUpisite drugi niz: ");
    gets(s2);
    printf("\nNiz s2 ponavlja se %d puta.", ponavljanjeNiza(s1, s2));

    return 0;
}