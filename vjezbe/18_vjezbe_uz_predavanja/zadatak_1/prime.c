/*

1. U modulu prime.c napišite definicije funkcija resetPrime() i getNextPrime(). U 
datoteci prime.h napišite njihove deklaracije. U modulu glavni.c nalazi se funkcija main
koja ilustrira što trebaju raditi funkcije resetPrime i getNextPrime. 
#include <stdio.h> 
#include "prime.h" 
int main (void) { 
 resetPrime(); 
 printf("Inicijaliziran je generator prostih brojeva.\n"); 
 printf("%d\n", getNextPrime()); 
 printf("%d\n", getNextPrime()); 
 printf("%d\n", getNextPrime()); 
 
 resetPrime(); 
 printf("Ponovo je inicijaliziran generator prostih brojeva.\n"); 
 printf("%d\n", getNextPrime()); 
 printf("%d\n", getNextPrime()); 
 printf("%d\n", getNextPrime()); 
 printf("%d\n", getNextPrime()); 
 printf("%d\n", getNextPrime()); 
 printf("%d\n", getNextPrime()); 
 return 0; 
} 
Rezultat izvršavanja prikazane funkcije main: 
Inicijaliziran je generator prostih brojeva. 
2 
3 
5
Ponovo je inicijaliziran generator prostih brojeva.
2 
3 
5 
7 
11 
13


*/
#include <stdio.h>
#include "math.h"


int newStart = 0;

void resetPrime(void){
    newStart = 1;
}



int getNextPrime(void){
    int flag;
    static int next = 2;
    if (newStart == 1){
        newStart = 0;
        next = 2;
        return next;
    }

    do{
        ++next;
        flag = 1;
        for (int i = 2; flag && i <= sqrt(next); ++i){
            if (next % i == 0) flag = 0;
        }
    } while (flag == 0);

    return next;
}