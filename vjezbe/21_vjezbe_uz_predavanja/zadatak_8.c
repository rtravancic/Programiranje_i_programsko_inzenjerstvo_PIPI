/*

8. Napisati vlastitu funkciju myStrcpy koja obavlja isto što i funkcija strcpy definirana u string.h. 
U funkciji se ne smiju koristiti funkcije iz <string.h>. 

*/


#include <stdio.h>
#include <stdlib.h>

void myStrcpy(char *dest, char *source){
    int i = 0;
    while(*(source + i) != '\0') {
        *(dest + i) = *(source + i);
        i++;
    }
    *(dest + i) = '\0';
}




int main(void){

    char dest[50], source[50] = "Ovo je niz";

    myStrcpy(&dest[0], &source[0]);

    printf("Rezultat: %s", dest);



    return 0;
}