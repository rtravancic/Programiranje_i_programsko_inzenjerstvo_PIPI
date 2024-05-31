/*

Napisati pseudokod i C program za sljedeći problem:
Učitati koeficijente pravaca y = a1 x + b1 i y = a2 x + b2
Ovisno o vrijednostima koeficijenata, ispisati poruku
Pravci su paralelni 
ili
Pravci se sijeku u x = xxxx.xx, y = xxxx.xx
Testirati program

*/

#include <stdio.h>

int main(void){
    float a1, a2, b1, b2, x;
    printf("Ucitajte koeficijente pravca(a1,b1,a2,b2):");
    scanf("%f %f %f %f", &a1, &b1, &a2, &b2);

    printf("\nUcitani su pravci y = %fx + %f i pravac y = %fx + %f", a1, b1, a2, b2);
    
    if (((b2 != 0) && ((a1/a2) == (b1/b2))) || (a2 == 0 && a1 == 0)){
        printf("\nPravci su paralelni");
    } else {
        x = (b2-b1)/(a1-a2);

        printf("\nPravci se sijeku u x = %6.2f, y = %6.2f", x, x*a1 + b1);
    }

    return 0;
}