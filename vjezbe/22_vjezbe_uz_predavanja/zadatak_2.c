/*

2. Napisati program koji pomoću funkcije getchar s tipkovnice učitava znakove u niz s1 dok god 
ne bude učitan znak 'X' (znak 'X' se ne dodaje u niz s1). Zatim u niz s2 učitava znakove dok 
se ne pojavi znak 'Y' (znak 'Y' se ne dodaje u niz s2). Osigurati da nizovi s1 i s2 budu 
ispravno terminirani (tj. na kraju niza se nalazi znak '\0'). Nakon učitavanja, pomoću funkcije 
putchar ispisati nizove s1 i s2 na zaslon, svaki u svoj redak. Nizovi s1 i s2 sigurno nisu dulji 
od 80 znakova. 

*/

#include <stdio.h>
#define MAXLEN 80

int main(void){
    char s1[MAXLEN + 1], s2[MAXLEN + 1];
    char input;
    int flag = 1;
    int i = 0;

    printf("Upisite prvi niz: \n");

    do{
        if(flag == 0) *(s1 + i++) = input;
        else flag = 0;

        input = getchar();
    
    } while(input != 'X');

    *(s1 + i) = '\0';
    
    printf("\n\nUpisite drugi niz:\n");
    flag = 1;
    i = 0;
    do{
        if(flag == 0) *(s2 + i++) = input;
        else flag = 0;

        input = getchar();
    
    } while(input != 'Y');

    *(s2 + i) = '\0';

    printf("\n%s%s", s1, s2);
    return 0;
}