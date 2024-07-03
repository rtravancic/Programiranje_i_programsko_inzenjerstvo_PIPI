/*

2. Na svom računalu izvedite sljedeći programski odsječak, uz ulazne podatke 1 2 3.0 4.0
 
 int i; 
 short j; 
 float x; 
 double y; 
 scanf("%d %d %f %f", &i, &j, &x, &y); 
 printf("%d %d %f %f\n", i, j, x, y); 
Jesu li se printf naredbom ispisale ispravne vrijednosti? Objasnite zašto. Što treba 
promijeniti u formatu scanf naredbe da bi odsječak radio ispravno? Izvođenjem programa na 
svom računalu provjerite svoj odgovor. 

*/

#include <stdio.h>

int main(void){
    int i; 
    short j; 
    float x; 
    double y; 
    scanf("%d %hd %f %lf", &i, &j, &x, &y); // ovako treba 
    printf("%d %d %f %f\n", i, j, x, y); // 1 2 3.0 4.0 // ovdje nije nuzno
    return 0;
}