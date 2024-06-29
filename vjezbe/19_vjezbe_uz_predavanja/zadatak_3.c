//3. Što će se ispisati sljedećim programom: 




#include <stdio.h> 
void f (int *p) { 
 int i1 = *p;       // 3
 int i2 = (*p)++;   // 3
 int i3 = *p;       // 4
 int i4 = *++p;     // 6
 int i5 = *p;       // 6
 int i6 = *p++;     // 6
 int i7 = *(p-1);   // 6
 int i8 = *p;       // 9
 printf ("%d %d %d %d %d %d %d %d\n", i1, i2, i3, i4, i5, i6, i7, i8); 
} 
int main (void) { 
 int polje[3][2] = {3, 6, 9, 12, 15, 18}; 
 f(&polje[0][0]); 
 return 0; 
} 