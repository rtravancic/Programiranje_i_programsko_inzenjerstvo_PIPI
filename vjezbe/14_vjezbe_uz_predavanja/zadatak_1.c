/*

1. Što će se ispisati sljedećim programom: 

2 16

*/

#include <stdio.h> 
int main (void) { 
 int a = 2, x = 10; 
 int *p = &a; 
 x += *p * 3; 
 printf ("%d %d\n", *p, x); 
 return 0; 
}