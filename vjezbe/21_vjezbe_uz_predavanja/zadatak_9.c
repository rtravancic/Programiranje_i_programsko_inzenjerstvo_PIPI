/*

9. Napisati vlastitu funkciju myStrlen koja obavlja isto što i funkcija strlen definirana u string.h 
(jedina razlika neka bude u tome što myStrlen vraća int, umjesto size_t). U funkciji se ne 
smiju koristiti funkcije iz <string.h>. 


*/

#include <stdio.h>

int myStrlen(char *p){
    int i = 0;
    while(*(p + i) != '\0') i++;
    return i;
}

int main(void){
    printf("Duljina niza %s je %d.", "Ena", myStrlen("Ena"));
    return 0;
}