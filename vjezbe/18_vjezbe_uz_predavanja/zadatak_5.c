/*

5. Što će se ispisati sljedećim programom: 


*/

#include <stdio.h> 
void f (int *p) { 
 printf ("%d %d\n", *p, *p+1); 
} 
int main (void) { 
 int polje[6] = {1, 2, 3, 4, 5, 6}; 
 int *pp; 
 pp = &polje[0]; 
 f(pp++); // 1 2
 f(pp); // 2 3
 f(++pp); // 3 4
 return 0; 
}