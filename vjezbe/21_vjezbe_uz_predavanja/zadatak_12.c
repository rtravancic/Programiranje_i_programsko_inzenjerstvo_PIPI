/*

12. Što će biti sadržaj nizova znakova s1, s2 i s3 nakon obavljanja odsječka programa: 
 


*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(void){
    char s1[20] = "ef123f156xyz", s2[20]="ABCD", s3[20]; 
    strcat(strcat(s2, "abc"), strcpy(s3, strstr(strchr(s1, '2'), "f1")));

    printf("\ns1: %s", s1);
    printf("\ns2: %s", s2);
    printf("\ns3: %s", s3);
    // s1 -> ef123f156xyz; s3 -> f156xyz, s2 -> ABCDabcf156xyz


    return 0;
}