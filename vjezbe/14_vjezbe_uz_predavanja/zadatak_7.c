    /*
    
    7. Što će se ispisati sljedećim programom: 

    */


   #include <stdio.h> 
int main (void) { 
 int polje[3][2] = {1, 2, 3, 4, 5, 6}; 
 int *p = &polje[1][1], i = 5; 
 printf ("%d\n", *(p + --i)); // van polja
 printf ("%d\n", *--p + --i); // 3+3 => 6
 return 0; 
} 