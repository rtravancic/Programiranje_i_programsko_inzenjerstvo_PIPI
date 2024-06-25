/*

4. Što će se ispisati sljedećim programom: 

*/

#include <stdio.h> 
int main (void) { 
 int a = 2, x = 10; 
 int *p = &a; 
 x += *p * 3; 
 printf ("%d %d\n", *p, x); // 2 16
 return 0; 
}
