/*

3. Što je neispravno u sljedećem programu: 

*/

#include <stdio.h> 
int main (void) { 
 int a, b, *c = &a;  // c->a
 short x, y = 10, *z = &x; // y = 10, z->x
 c = &b; // c->b
 z = &y; // z->y
 *c = 20; // b=20
 *z = 30; // y=30
 c = &y; //error?? c->y
 printf ("%d %d\n", *c, *z); // error.., 30
 return 0; 
} 