/*

3. Što će se ispisati tijekom izvođenja sljedećeg programa: 

*/

#include <stdio.h> 
void fun(void) { 
 int x = 5; 
 printf("%d\n", x); 
 x++; 
} 
int main (void) { 
 fun(); // 5
 fun(); // 5
 return 0; 
}