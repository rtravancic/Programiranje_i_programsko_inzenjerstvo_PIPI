/*

7. Što će se ispisati sljedećim programom: 

*/


#include <stdio.h> 
int main(void) { 
    printf("|%d|\n", 10); //    |10|
    printf("|%5d|\n", 10); //   |   10|
    printf("|%1d|\n", 10); // |10|
    printf("|%s|\n", "Ana"); // |Ana|
    printf("|%5s|\n", "Ana"); // |  Ana|
    printf("|%2s|\n", "Ana"); // |Ana|
    printf("|%x|\n", 27); // |1b|
    printf("|%6x|\n", 27); // |    1b|
    printf("|%o|\n", 9);  // |11|
    printf("|%6o|\n", 9);  // |    11|
    printf("|%1o|\n", 9); // |11|
    printf("|%f|%7.4f|%7.2f|\n", 23.127, 23.127, 23.127); // |23.127000| 23.1270|   23.12|
    printf("|%e|%12.4e|%.2e|\n", 0.00021278, 0.00021278, 0.00021278); //|2.127800e-04|  2.1278e-04|2.13e-04|
 return 0; 
}
