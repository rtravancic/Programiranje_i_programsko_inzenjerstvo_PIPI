/*

15. Napisati vlastitu funkciju myStrstr koja obavlja isto što i funkcija strstr definirana u 
<string.h>. U funkciji se ne smiju koristiti funkcije iz <string.h>. 

*/

#include <stdio.h>
#include <stdlib.h>

char *myStrstr(char *s1, char *s2){
    char *potential;
    int pos = 0;
    int flag;

    while(*(s1 + pos) != '\0'){
        flag = 1;
        for(int i = 0; *(s2 + i) != '\0'; i++){
            if(*(s1 + pos + i) == *(s2 + i)) continue;
            else{
                 flag = 0;
                 break;
            }
        }

        if (flag == 1) return s1 + pos;
        else pos++;

    }
}

int main(void){
    char niz[] = "Niz ovo je ono";
    char test[] = "ovo";

    printf("Pocetno stanje: \n%s \n%s\n \nRezultat: %s", niz, test, myStrstr(&niz[0], &test[0]));

    return 0;
}