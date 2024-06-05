/*

1. S tipkovnice u char varijablu c učitajte jedan znak. Ako je učitano veliko slovo, 
ispisati poruku "To je veliko slovo". Ako je učitano malo slovo, ispisati poruku "To je 
malo slovo". Ako je učitana znamenka (0-9), ispisati poruku "To je znamenka". Ako 
nije učitano ni slovo ni znamenka, ispisati poruku "To je neki drugi znak".

*/


#include <stdio.h>


int main(void){


    char c;
    printf("Upisite jedan znak: ");
    scanf("%c", &c);

    if (c >= 48 && c <= 57){
        printf("\nTo je znamenka!");
    }

    else if(c >= 65 && c <= 90){
        printf("To je veliko slovo!");
    }

    else if (c >= 97 && c <= 122){
        printf("To je malo slovo!");
    } else {
        printf("To je neki drugi znak!");
    }

    return 0;
}