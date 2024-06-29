//6. Što će se ispisati sljedećim programom: 


#include <stdio.h> 
void f (int *p) { 
 static int i = 0; 
 i++; 
 printf ("%d\n", *(p + --i)); 
} 
int main (void) { 
 int polje[3][2] = {1, 2, 3, 4, 5, 6}; 
 f(&polje[0][0]);  // 1
 f(&polje[1][0]);  // 3
 f(&polje[1][1]);  // 4
 return 0; 
}