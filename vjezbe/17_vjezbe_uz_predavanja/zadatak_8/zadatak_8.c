/*

8. Napisati funkciju zbroji tipa int koja vraća zbroj dvaju zadanih cijelih brojeva i funkciju 
mnozi tipa int koja vraća umnožak dvaju zadanih cijelih brojeva. Svaka od funkcija, osim što 
izračunava rezultat i vraća ga u pozivajući program, na zaslon ispisuju koliko je puta bila 
pozvana. Npr. ako se u glavnom programu obave naredbe: 
 printf("2*2=%d\n", mnozi(2,2)); 
 printf("2+3=%d\n", zbroji(2,3)); 
 printf("4+2=%d\n", zbroji(4,2)); 
 printf("2*5=%d\n", mnozi(2,5)); 
 printf("2*3=%d\n", mnozi(2,3)); 
na zaslonu se treba ispisati: 
Funkcija mnozi do sada je pozvana 1 puta ← ispisano u funkciji mnozi
2*2=4 ← ispisano u glavnom programu
Funkcija zbroji do sada je pozvana 1 puta ← ispisano u funkciji zbroji
2+3=5 ← ispisano u glavnom programu
Funkcija zbroji do sada je pozvana 2 puta ← ispisano u funkciji zbroji
4+2=6 ← ispisano u glavnom programu
Funkcija mnozi do sada je pozvana 2 puta ← ispisano u funkciji mnozi
2*5=10 ← ispisano u glavnom programu
Funkcija mnozi do sada je pozvana 3 puta ← ispisano u funkciji mnozi
2*3=6 ← ispisano u glavnom programu


*/

#include <stdio.h>

int zbroji(int n1, int n2){
    static int broj = 0;
    broj++;
    printf("\nFunkcija zbroji do sada je pozvana %d puta.\n", broj);
    return n1 + n2;
}

int mnozi(int n1, int n2){
    static int broj = 0;
    broj++;
    printf("\nFunkcija mnozi do sada je pozvana %d puta.\n", broj);
    return n1 * n2;
}