/*

6. Što će se ispisati sljedećim programom: 

*/


#include <stdio.h> 
int main (void) { 
 int polje[3][2] = {3, 6, 9, 12, 15, 18}; // {{3,6},{9,12},{15,18}}
 int *p = polje[0]; 
 int i1 = *p;        
 int i2 = (*p)++; 
 int i3 = *p;     
 int i4 = *++p;   
 int i5 = *p; 
 int i6 = *p++; 
 int i7 = *(p-1); 
 int i8 = *p; 
 printf ("%d %d %d %d %d %d %d %d\n", i1, i2, i3, i4, i5, i6, i7, i8); // 3 3 4 6 6 6 6 9
 return 0; 
}



