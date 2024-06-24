#include <stdio.h> 
#include "proto.h" 
extern int x = 20; 
void fun2(void) { 
 x += 4; 
 printf("%d\n", x); 
}