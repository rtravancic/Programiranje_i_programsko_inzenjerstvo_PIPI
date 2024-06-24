/*
9. Slično kao prethodni zadatak, uz dodatak: svaka od funkcija mora ispisati ne samo koliko je 
puta bila pozvana ona sama, nego i koliko puta je bila pozvana bilo koja od funkcija zbroji i 
mnozi. Npr. ako se u glavnom programu obave naredbe: 
 printf("2*2=%d\n", mnozi(2,2)); 
 printf("2+3=%d\n", zbroji(2,3)); 
 printf("4+2=%d\n", zbroji(4,2)); 
 printf("2*5=%d\n", mnozi(2,5)); 
 printf("2*3=%d\n", mnozi(2,3)); 
na zaslonu se treba ispisati: 
Funkcija mnozi do sada je pozvana 1 puta ← ispisano u funkciji mnozi
Funkcije zbroji i mnozi do sada su pozvane 1 puta ← ispisano u funkciji mnozi
2*2=4 ← ispisano u glavnom programu
Funkcija zbroji do sada je pozvana 1 puta ← ispisano u funkciji zbroji 
Funkcije zbroji i mnozi do sada su pozvane 2 puta ← ispisano u funkciji zbroji
2+3=5 ← ispisano u glavnom programu
Funkcija zbroji do sada je pozvana 2 puta ← ispisano u funkciji zbroji 
Funkcije zbroji i mnozi do sada su pozvane 3 puta ← ispisano u funkciji zbroji
4+2=6 ← ispisano u glavnom programu
Funkcija mnozi do sada je pozvana 2 puta ← ispisano u funkciji mnozi
Funkcije zbroji i mnozi do sada su pozvane 4 puta ← ispisano u funkciji mnozi
2*5=10 ← ispisano u glavnom programu
Funkcija mnozi do sada je pozvana 3 puta ← ispisano u funkciji mnozi
Funkcije zbroji i mnozi do sada su pozvane 5 puta ← ispisano u funkciji mnozi
2*3=6 ← ispisano u glavnom programu


*/

#include <stdio.h>
int total = 0;
int zbroji(int n1, int n2){
    total++;
    static int broj = 0;
    broj++;
    printf("Funkcija zbroji do sada je pozvana %d puta.\n", broj);
    printf("Funkcija zbroji i mnozi do sada su pozvane %d puta.\n", total);
    return n1 + n2;
}

int mnozi(int n1, int n2){
    total++;
    static int broj = 0;
    broj++;
    printf("Funkcija mnozi do sada je pozvana %d puta.\n", broj);
    printf("Funkcija zbroji i mnozi do sada su pozvane %d puta.\n", total);
    return n1 * n2;
}