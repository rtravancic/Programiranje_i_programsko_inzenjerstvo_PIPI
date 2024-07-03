/*

4. Koje su vrijednosti svih definiranih varijabli nakon obavljanja sljedećeg odsječka programa: 
 int rez1, rez2; 
 int a, b; 
 char s1[10+1], s2[10+1], s3[10+1], s4[10+1]; 
 rez1 = scanf("%3d %d", &a, &b); 
 rez2 = scanf("%s%s%4s %s", s1, s2, s3, s4); 
ako su preko tipkovnice uneseni sljedeći podaci:

12ab Marija 
 Marica Ana

*/

#include <stdio.h>

int main(void){

    int rez1, rez2; 
    int a, b; 
    char s1[10+1], s2[10+1], s3[10+1], s4[10+1]; 
    rez1 = scanf("%3d %d", &a, &b); // 
    rez2 = scanf("%s%s%4s %s", s1, s2, s3, s4);//  
    printf("Rezultati:\na: %d\nb: %d\ns1: %s\ns2: %s\ns3: %s\ns4: %s\nrez1: %d\nrez2: %d", a, b, s1, s2, s3, s4, rez1, rez2);

    return 0;
}