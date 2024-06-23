/*

5. Što će se ispisati sljedećim programom: 

*/

#include <stdio.h> 
int main (void) { 
 int polje[4][2] = {3, 6, 9, 12, 15, 18, 21, 24}; // {{3,6},{9,13},{15,18},{21,24}}
 int *p1, *p2, *p3; 
 p1 = &polje[0][0]; // 3
 p2 = &polje[1][0]; // 9
 p3 = &polje[3][1]; // 24
 printf ("%d %d %d %d %d\n", *p1, *p2, *p3, *(p1 + 1), *p1 + 1); // 3 9 24 6 4
 return 0; 
}
