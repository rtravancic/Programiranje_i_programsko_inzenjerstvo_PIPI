/*

3. Generirati 10 000 cijelih brojeva iz zatvorenog intervala [50,60]. Na zaslon ispisati frekvenciju 
pojavljivanja svakog od brojeva. 
 50 se pojavio 1100 puta 
 51 se pojavio 987 puta 
 ...
 60 se pojavio 1083 puta 

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10000
#define LOW 50
#define HIGH 60

int main(void){
    int memory[11] = {0};
    int i;
    srand((unsigned) time(NULL));

    for(i = 0; i < 10000; i++) memory[rand() % 11] += 1;

    for(i = 0; i < 11; i++) printf("\n%d se pojavilo %d puta.", 50+i, memory[i]);
    return 0;
}