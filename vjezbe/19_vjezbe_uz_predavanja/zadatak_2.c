/*
2. Napišite funkciju koja iz zadanog niza znakova izbacuje sve samoglasnike. Npr. ako se 
funkciji zada niz znakova Antigona, funkcija ga mora promijeniti u niz znakova ntgn. 
*/


#include <stdio.h>

int izbaciSamoglasnike(char *p){
    int curr = 0;
    int i = 0;

    while(*(p + i) != '\0'){
        if (!(*(p + i) == 'a' || 
        *(p + i) == 'e' || 
        *(p + i) == 'i' || 
        *(p + i) == 'o' || 
        *(p + i) == 'u' || 
        *(p + i) == 'A' || 
        *(p + i) == 'E' || 
        *(p + i) == 'I' || 
        *(p + i) == 'O' || 
        *(p + i) == 'U')) *(p + curr++) = *(p + i);
        i++;

    }
    *(p + curr) = '\0';
}


int main(void){
    char ime[] = "Antigona";
    printf("\nPrije: %s", ime);
    izbaciSamoglasnike(ime);
    printf("\nPoslje: %s", ime);
    return 0;
}