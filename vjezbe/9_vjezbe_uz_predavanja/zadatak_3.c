/*

3. S tipkovnice u char varijablu z1 učitajte znak. Ako učitani znak nije heksadekadska 
znamenka (0-9, A-F, a-f), ispisati poruku "Nije dobra znamenka" i završiti program. 
Inače, ispisati dekadski ekvivalent učitane heksadekadske znamenke. Npr. ako je 
učitan znak e, treba ispisati 14.

*/

#include <stdio.h>

int main(void){

    char z1;

    printf("Ucitajte znak (heksadekadska znamenka): ");
    scanf("%c", &z1);
    if( z1 >= 48 && z1 <= 57){
        printf("Upisana je: %c", z1);
    } else if(z1  >= 65 && z1 <= 70){
        printf("Upisana je %d", z1 - 55);
    } else if (z1 >= 97 && z1 <= 102){
        printf("Upisana je %d", z1 - 87);
    } else{
        printf("Nije dobra znamenka!");
    }

    return 0;
}
