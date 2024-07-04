/*

1. Napisati program koji će sadržaj tekstualne datoteke ulaz.txt prepisati na zaslon, ali tako 
da se umjesto malih slova ispisuju velika. Za čitanje znakova iz datoteke treba koristiti 
funkciju fgetc. Pomoću editora (npr. notepad) prirediti tekstualnu datoteku ulaz.txt, 
pohraniti ju unutar nekog kazala (direktorija), npr. c:\tmp, te testirati program. 

*/


#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void){
    FILE *du;
    int c;

    du = fopen("ulaz.txt", "r");
    if (du == NULL){
        printf("Ne mogu otvoriti datoteku ulaz.txt\n");
        exit(1);
    } 

    while((c = fgetc(du)) != EOF) printf("%c", toupper(c));

    fclose(du);


    return 0;
}