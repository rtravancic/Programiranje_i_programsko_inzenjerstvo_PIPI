//4. Što će se ispisati sljedećim programom: 



#include <stdio.h> 
void f (int *p) { 
 printf ("%d %d\n", *p, *p+1); 
} 


int main (void) { 
 int polje[3][2] = {1, 2, 3, 4, 5, 6}; 
 int *pp; 
 pp = &polje[0][0]; 
 f(pp++); // poz 1 -> 1 2
 f(++pp); // poz 3 -> 3 4
 return 0; 
}