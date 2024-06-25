/*

7. Što će se ispisati sljedećim programom: 

*/

#include <stdio.h> 
void f (int *p) { 
 int i = 3; 
 printf ("%d\n", *(p + --i)); 
} 
int main (void) { 
 int polje[6] = {1, 2, 3, 4, 5, 6}; 
 f(&polje[0]); // 3
 f(&polje[1]); // 4
 f(&polje[2]); // 5
 return 0; 
}