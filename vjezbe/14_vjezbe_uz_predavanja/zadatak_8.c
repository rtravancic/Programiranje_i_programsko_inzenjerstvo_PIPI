/*

8. Izrazima zamijenite upitnike u printf naredbi kojom će se ispisati članovi glavne dijagonale 
matrice x. Članovima matrice mora se pristupati preko pokazivača p: 

*/


#include <stdio.h> 
int main(void) { 
 int x[4][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16}; //{{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}, {13, 14, 15, 16}}
 int *p = &x[0][0]; 
 printf("%d %d %d %d\n", *p, *(p+5), *(p+10), *(p+15)); 
 return 0; 
}
