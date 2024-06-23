/*

8. Napišite funkciju koja prima pokazivače na dvije varijable tipa int, te vraća vrijednost
varijable koja ima veću vrijednost.

*/

#include <stdio.h>

int veci(int *prvi, int *drugi){
    if (*drugi > *prvi) return *drugi;
    return *prvi;
}

int main(void){ 

    int prvi, drugi;

    printf("Unesite prvi broj: ");
    scanf("%d", &prvi);
    printf("Unesite drugi broj: ");
    scanf("%d", &drugi);

    printf("Veci od njih je broj %d", veci(&prvi, &drugi));

    return 0;
}