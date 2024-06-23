/*

4. Napisati funkciju tipa double koja za zadani cijeli broj n (formalni argument je tipa int) vraća 
n
2
. Provjerite hoćete li dobiti ispravan rezultat kada s tom funkcijom pokušate izračunati 22
, 
500002
. 
*/



#include <stdio.h>

double kvad(int n){
    return (double)n*n;
}

int main(void){
    int n;
    printf("Unesite broj koji zelite kvadrirat: ");
    scanf("%d", &n);

    printf("Kvadrirani broj je: %lf", kvad(n));

    return 0;
}

