/*

2. Napišite program koji će poslužiti kao primjer kojim ćete "dokazati" da sljedeće macro 
definicije nisu ispravno napisane: 
#define ZBROJI(a, b) a + b 
#define ODUZMI(a, b) (a)-(b) 
#define PODIJELI(x, y) (x/y) 
#define OPETPODIJELI(x, y) (x)/(y) 
Koja pravila pisanja ove macro definicije ne zadovoljavaju? Zatim u svom programu ispravite 
navedene macro definicije i ponovo izvedite program.

*/
#define ZBROJI(a, b) a + b 
#define ODUZMI(a, b) (a)-(b) 
#define PODIJELI(x, y) (x/y) 
#define OPETPODIJELI(x, y) (x)/(y) 

#define ZBROJI1(a, b) ((a) + (b)) 
#define ODUZMI1(a, b) ((a)-(b)) 
#define PODIJELI1(x, y) ((x)/(y)) 
#define OPETPODIJELI1(x, y) ((x)/(y))

#include <stdio.h>


int main(void){

    printf("Rezultat ZBROJI(3, 2) * 5 = %d \n", ZBROJI(3, 2) * 5); 
    printf("Rezultat ZBROJI1(3, 2) * 5 = %d \n", ZBROJI1(3, 2) * 5);
    printf("Rezultat ODUZMI(3, 2) * 5 = %d \n", ODUZMI(3, 2) * 5);
    printf("Rezultat ODUZMI1(3, 2) * 5 = %d \n", ODUZMI1(3, 2) * 5);
    printf("Rezultat PODIJELI(3 + 5, 2) = %d \n", PODIJELI(3 + 5, 2));
    printf("Rezultat PODIJELI1(3 + 5, 2) = %d \n", PODIJELI1(3 + 5, 2) );
    printf("Rezultat 20 / OPETPODIJELI(4, 2) = %d \n", 20 / OPETPODIJELI(4, 2));
    printf("Rezultat 20 / OPETPODIJELI1(4, 2) = %d \n", 20 /PODIJELI1(4, 2));

    return 0;
}
