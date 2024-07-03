/*

1. Što će se ispisati sljedećim programskim odsječkom. Izvođenjem programa na svom 
računalu provjerite svoj odgovor. Ulazni podaci su 11 12 13 1e
 
 int i, j, k, m; 
 scanf("%d %o %x %x", &i, &j, &k, &m); 
 printf("%d %d %d %d\n", i, j, k, m);

*/


#include <stdio.h>

int main(void){ 

 
    int i, j, k, m; 
    scanf("%d %o %x %x", &i, &j, &k, &m); // 11 12(8) 13(16) 1e(16)
    printf("%d %d %d %d\n", i, j, k, m); // 11 10 19 30

    return 0;
}