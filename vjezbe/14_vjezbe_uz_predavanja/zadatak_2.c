/*

2. Što će se ispisati sljedećim programom: 


*/


#include <stdio.h> 
int main (void) { 
 int a = 10, b = 20, *c = &a, *d = &b; // a=10, b=20, c->a, d->b
 c = &b; // c->b
 d = &a; // d->a
 *c = *d + 5; // b=15
 *d = *c + 3; // a=18
 printf ("%d %d %d %d\n", a, b, *c+1, *d+1); // 18 15 16 19
 return 0; 
} 