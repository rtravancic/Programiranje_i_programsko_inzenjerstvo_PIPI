/*

6. Preko tipkovnice se unose matični brojevi i datumi rođenja osoba. Datum rođenja sadrži redni 
broj dana, redni broj mjeseca i redni broj godine. Npr. sadržaj ulaza može izgledati ovako: 

101 15.5.1989
1526 17.6.1987
17 9.12.1987
0

Za svaku osobu pomoću funkcije scanf učitati matični broj, redni broj dana, redni broj 
mjeseca i redni broj godine. Učitavanje se prekida kada se za matični broj upiše 0. Nakon 
završenog učitavanja, ispisati matične brojeve i godine rođenja osoba. Za prikazani primjer 
ulaza, izlaz treba izgledati ovako: 

101. 1989.
1526. 1987.
 17. 1987.

Može se pretpostaviti da će korisnik unijeti podatke za najviše 100 osoba

*/


#include <stdio.h>
#define MAXOS 100

int main(void){
    int maticni_broj[MAXOS], godine[MAXOS], placeholder, test, iter = 0;

    do{
        scanf("%d", &placeholder);
        if (placeholder != 0){
            maticni_broj[iter] = placeholder;
            scanf("%d%c%d%c%d", &placeholder, &placeholder, &placeholder, &placeholder, &godine[iter]);
            iter++;
        }
    } while(placeholder != 0);

    for(int i = 0; i < iter; i++) printf("%4d. %4d.\n", maticni_broj[i], godine[i]);
    return 0;
}
