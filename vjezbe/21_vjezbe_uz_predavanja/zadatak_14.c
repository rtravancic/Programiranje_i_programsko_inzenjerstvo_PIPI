/*

14. Napisati vlastitu funkciju myStrchr koja obavlja isto što i funkcija strchr definirana u 
<string.h>. U funkciji se ne smiju koristiti funkcije iz <string.h>. 

*/

#include <stdio.h>
#include <stdlib.h>


char *myStrchr(char *s, char c){
    while(*s != '\0'){
        if(*s == c) return s;
        *s++;
    }

    return NULL;
}


int main(void){
    char niz[] = "Ovo je niz";
    printf("Pocetan niz: %s\nRezultat: %s", niz, myStrchr(niz, 'j'));

    return 0;
}