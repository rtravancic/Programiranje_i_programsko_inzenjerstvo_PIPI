/*

4. Što će se ispisati sljedećim programom: 

*/


#include <stdio.h> 
int main (void) { 
 int polje[4] = {3, 6, 9, 12}; 
 int *p1, *p2, *p3; 
 p1 = &polje[0]; 
 p2 = &polje[1]; 
 p3 = &polje[3]; 
 printf ("%d %d %d %d %d\n", *p1, *p2, *p3, *(p2 - 1), *p2 - 1); // 3 6 12 3 5
 return 0; 
}
