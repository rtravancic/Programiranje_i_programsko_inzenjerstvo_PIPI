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