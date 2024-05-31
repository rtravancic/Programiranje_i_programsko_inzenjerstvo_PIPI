/*

3. Nacrtati dijagram toka i napisati C program za zbrajanje ili množenje realnih brojeva. Na 
početku program treba ispisati poruku 
Program za zbrajanje ili mnozenje. 
Upisite dva realna broja > 
i učitati dva realna broja koji predstavljaju operande.
Nakon toga program treba ispisati poruku 
Upisite vrstu operacije (1-zbrajanje, 2-mnozenje) >
i učitati cijeli broj kojim se određuje vrsta operacije. Ako je korisnik upisao broj 1, tada treba 
izračunati i ispisati zbroj operanada, a ako je upisao broj 2, tada izračunati i ispisati 
umnožak operanada. Ako za odabir vrste operacije korisnik nije upisan niti broj 1 niti broj 2, 
tada treba ispisati poruku 
Neispravan odabir operacije.

*/

#include <stdio.h>

int main(void){
    int odabir;
    float x, y;
    printf("Program za zbrajanje ili mnozenje.\nUpisite dva realna broja>");
    scanf("%f %f", &x, &y);
    printf("Upisite vrstu operacije (1-zbrajanje, 2-mnozenje) >");
    scanf("%d", &odabir);

    if (odabir == 1)    printf("Zbroj je: %f", x + y);
    else if (odabir == 2) printf("Umnozak je: %f", x * y);
    else printf("Neispravan odabir operacije");

    return 0;
}