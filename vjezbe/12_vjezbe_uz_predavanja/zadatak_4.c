/*

4. Cjelobrojno polje je potrebno napuniti s prvih 40 članova Fibonaccijevog niza. 
Naputak: za prva dva člana polja ubaciti 1 i 1. Svaki sljedeći član izračunati na 
temelju prethodna dva. Uočite da se prethodna dva člana uvijek nalaze u polju, pa 
nije potrebno koristiti varijable f0 i f1 kao u primjeru s predavanja. Kakvu petlju ovdje 
treba koristiti?

*/


#include <stdio.h>
#define SIZE 40

int main(void){

    int fibs[SIZE];
    fibs[0] = fibs[1] = 1;

    for (int i = 2; i < SIZE; i++) fibs[i] = fibs[i-1] + fibs[i-2];

    return 0;
}