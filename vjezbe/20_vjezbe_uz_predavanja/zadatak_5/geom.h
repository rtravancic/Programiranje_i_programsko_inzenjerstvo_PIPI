/*

5. Definirati tip podatka tTocka kojim se opisuje jedna točka u pravokutnom koordinatnom 
sustavu (x i y su vrijednosti tipa double). Napisati prototip funkcije udaljToc koja za dvije 
točke zadane pomoću tipa podatka tTocka izračunava udaljenost među točkama (double). 
Definiciju tipa tTocka i prototip funkcije udaljToc napisati u zaglavnoj datoteci geom.h. 
Definiciju funkcije udaljToc napisati u modulu geom.c 
Napisati glavni program koji će u varijable t1 i t2 tipa tTocka učitati koordinate dviju točaka, 
zatim pomoću funkcije udaljToc izračunati njihovu udaljenost, te izračunatu vrijednost ispisati 
na zaslon.

*/

struct  {
    double x;
    double y;
}typedef tTocka;

double udaljToc(tTocka t1, tTocka t2);