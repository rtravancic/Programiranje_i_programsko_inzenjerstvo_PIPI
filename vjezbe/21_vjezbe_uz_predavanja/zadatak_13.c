/*

13. Napisati macro MYTOUPPER koja obavlja isto što i funkcija toupper definirana u <ctype.h>. 
Napisati glavni program koji će pomoću funkcije gets učitati niz znakova (sigurno ne dulji od 
40 znakova), te na zaslon ispisati učitani niz, ali tako da su sva mala slova pretvorena u 
velika. Za pretvaranje malih slova u velika koristiti macro MYTOUPPER. 

*/

#define MYTOUPPER(c) (((c) > 'a' && (c) < 'z') ? (c - 32): (c))
#define MAXLEN 40
#include <stdio.h>


int main(void){
    char niz[MAXLEN + 1];
    gets(niz);
    for(int i = 0; *(&niz[0] + i) != '\0'; i++) *(&niz[0] + i) = MYTOUPPER(*(&niz[0] + i));

    printf("\nRezultat: %s", niz);
    return 0;
}