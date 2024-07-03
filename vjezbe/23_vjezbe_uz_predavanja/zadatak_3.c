/*

3. Koje su vrijednosti svih definiranih varijabli nakon obavljanja sljedećeg odsječka programa: 
 int rez1, rez2, rez3; 
 int a, b, c; 
 short d; 
 char e; 
 float x, y; 
 double z, w; 
 rez1 = scanf("%3d%d%d %hx%c", &a, &b, &c, &d, &e); 
 rez2 = scanf("%f%5f", &x, &y); 
 rez3 = scanf(" %lf %lf", &z, &w); 
ako su preko tipkovnice uneseni sljedeći podaci:

12345 6 
 a2m 
 11-10 .1+ 3 

*/

#include <stdio.h>

int main(void){

     int rez1, rez2, rez3; 
    int a, b, c; 
    short d; 
    char e; 
    float x, y; 
    double z, w; 
    rez1 = scanf("%3d%d%d %hx%c", &a, &b, &c, &d, &e); 
    rez2 = scanf("%f%5f", &x, &y); 
    rez3 = scanf(" %lf %lf", &z, &w); 

    printf("Rezultati:\na: %3d\nb: %d\nc: %d\nd: %hx\ne: %d\nx: %f\ny: %f\nz: %f\nw: %f\nrez1: %d\nrez2: %d\nrez3: %d", a, b, c, d, e, x, y, z, w, rez1, rez2, rez3); //123 45 6 a2 m
   
    return 0;
}