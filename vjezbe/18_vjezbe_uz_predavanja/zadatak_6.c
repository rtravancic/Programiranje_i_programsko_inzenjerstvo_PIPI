/*
6. Što će se ispisati sljedećim programom: 

*/

#include <stdio.h> 
void f (int *p) { 
 static int i = 2; 
 printf ("%d\n", *(p + ++i)); 
} 
int main (void) { 
 int polje[8] = {1, 2, 3, 4, 5, 6, 7, 8}; 
 f(&polje[0]); // 4
 f(&polje[0]); // 5
 f(&polje[0]); // 6
 f(&polje[1]); // 8
 return 0; 
}