/*
5. Što će se ispisati tijekom izvođenja sljedećeg programa: 

*/

#include <stdio.h> 
void fun(void) { 
 static int x = 5; 
 int y = 5; 
 printf("%d %d\n", ++x, --y); 
} 
int main (void) { 
 fun(); //6 4
 fun(); //7 4
 fun(); //8 4
 return 0; 
} 
