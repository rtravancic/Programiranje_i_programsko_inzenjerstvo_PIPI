/*

1. Napisati funkciju tipa int koja za zadani cijeli broj n (formalni argument je tipa int) vraća n2
.

*/


#include <stdio.h>

int kvad(int n){
    return n*n;
}

int main(void){
    int n;
    printf("Unesite broj koji zelite kvadrirat: ");
    scanf("%d", &n);

    printf("Kvadrirani broj je: %d", kvad(n));

    return 0;
}



/*
2. Provjerite hoćete li dobiti ispravan rezultat kada pomoću funkcije iz 1. zadatka pokušate 
izračunati 500002
. Objasnite što se dogodilo. ---> dogodio se OVERFLOW

3. Provjerite hoćete li dobiti ispravan rezultat kada pomoću funkcije iz 1. zadatka pokušate 
izračunati 2.02
 i 3.52
. Objasnite što se dogodilo.  ---> broj je pretvoren u int jer je argument funkcije tipa int
*/