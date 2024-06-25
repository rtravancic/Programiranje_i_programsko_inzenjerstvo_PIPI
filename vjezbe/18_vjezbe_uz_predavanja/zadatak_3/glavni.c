/*

3. Napišite funkciju koja u zadanom jednodimenzijskom realnom polju prebroji koliko članova je 
veće od 0.0, koliko članova je manje od 0.0 i koliko članova je jednako 0.0. Dobivene 
vrijednosti funkcija mora vratiti u pozivajući program. Funkciju, glavni program i prototipove 
smjestite u tri zasebne datoteke. Testirati prevođenje na dva načina: 
• tako da se oba modula prevedu i povežu samo jednim pozivom prevodioca 
• tako da se zasebno prevede svaki modul, a zatim se dobiveni objektni kôd poveže u 
izvršni kôd 

*/

#include <stdio.h>
#include "counter.h"

int main(void){

    float test1[] = {1, -1, 0, 0, 4, -5, 1};
    float test2[] = {2, 0, -1};
    int veci, manji, jednaki;

    counter(test1, 7, &veci, &manji, &jednaki);
    printf("\nTestno polje: ");
    for(int i = 0; i <= 6; i++) printf("%f ", *(test1 + i));
    printf("\nVeci: %d\t\tJednak: %d\t Manji: %d\n", veci, jednaki, manji);

    counter(test2, 3, &veci, &manji, &jednaki);
    printf("\n\nTestno polje: ");
    for(int i = 0; i <= 2; i++) printf("%f ", *(test2 + i));
    printf("\nVeci: %d\t\tJednak: %d\t Manji: %d\n", veci, jednaki, manji);

    return 0;
}