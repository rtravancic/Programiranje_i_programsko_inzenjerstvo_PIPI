/*

19. Načinite program kojim će se učitati član niza a1 koji mora biti cijeli broj veći od 1. 
Nije potrebno provjeravati ispravnost unesenog broja. Ispisati članove niza a1, a2, a3, 
..., an i ukupan broj članova niza. Član niza ai (za i > 1) izračunava se na sljedeći 
način: 
ako je ai-1 paran, tada je ai = ai-1 / 2 
ako je ai-1 neparan, tada je ai = 3 ai-1 + 1 
Niz završava članom an = 2

*/

#include <stdio.h>


int main(void){
    int a1;
    int next;
    
    int count = 1;

    printf("Unesite cijeli broj veci od 1: ");
    scanf("%d", &a1);
    printf("a1 = %d", a1);
    next = a1;
    while (1){
        
        next = next%2 == 0 ? next/2. : 3*next + 1;
        printf("\na%d = %d", ++count, next);
        if (next == 2) break;

    }

    
    return 0;
}