/*

4. S tipkovnice učitati dva realna broja: dividend i divizor. Napisati i testirati program na 
temelju prikazanih primjera izvršavanja programa: 
 1. primjer izvršavanja programa 
upisite dividend i divizor: 12345.6 -7.89
rezultat dijeljenja je -1564.7148
 2. primjer izvršavanja programa 
upisite dividend i divizor: 12.3 4.5
rezultat dijeljenja je 2.7333 
 3. primjer izvršavanja programa 
upisite dividend i divizor: 1.2 3.4
rezultat dijeljenja je 0.3529
 4. primjer izvršavanja programa 
upisite dividend i divizor: 5.6 0.
rezultat operacije nije definiran 
Uputa: uočite kako se rezultat uvijek ispisuje s točno četiri znamenke iza decimalne 
točke, dok širina ispisa ispred decimalne točke ovisi o broju kojeg treba ispisati.

*/


#include <stdio.h>

int main(void){
    float num, div;
    printf("Upisite divided i divizor: ");
    scanf("%f %f", &num, &div);
    if (div != 0){
        printf("\nRezultat djeljenja je: %.4f", num/div);
    } else {
        printf("Rezultat operacije nije definiran");
    }
    
    return 0;
}