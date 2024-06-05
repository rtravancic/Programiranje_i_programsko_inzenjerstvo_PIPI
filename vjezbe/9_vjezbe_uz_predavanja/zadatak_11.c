/*

11. Riješiti pomoću petlje s ispitivanjem uvjeta na početku. U varijablu tipa int s 
tipkovnice učitati nenegativni cijeli broj (ne treba kontrola je li broj nenegativan). Na 
zaslon ispisati binarni sadržaj registra te varijable (binarne znamenke se moraju 
ispisati ispravnim redoslijedom). Za izdvajanje bitova koristiti bitovni operator & i 
operator za posmak bitova prema desno. Može se pretpostaviti da se za pohranu 
int tipa podatka koristi 32 bita. 
 Uputa: 
• ako se sadržaj registra 01000000000000000000000000010010 posmakne za 31
mjesto u desno, koja binarna znamenka originalnog broja će se pojaviti na krajnjoj 
desnoj poziciji? 
• ako se sadržaj registra 01000000000000000000000000010010 posmakne za 30
mjesta u desno, koja binarna znamenka originalnog broja će se pojaviti na krajnjoj 
desnoj poziciji? 
• ako se sadržaj registra 01000000000000000000000000010010 posmakne za 29
mjesta u desno, koja binarna znamenka originalnog broja će se pojaviti na krajnjoj 
desnoj poziciji? I tako dalje... 
• vrijednost "krajnje desnog bita" varijable x može se dobiti operacijom x & 1

*/

#include <stdio.h>

int main(void){

    int s;
    int iter = 31;
    printf("Upisite nenegativni cijeli broj: ");
    scanf("%d", &s);

    while(iter >= 0){
        printf("%d", (s >> iter--) & 1);
    }
    

    return 0;
}