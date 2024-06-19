/*

3. Učitati pozitivni cijeli broj. Uzastopnim dijeljenjem sa 16 odrediti znamenke 
ekvivalentnog heksadekadskog broja. Ispisati ekvivalentni heksadekadski broj, ali 
tako da su znamenke heksadekadskog broja ispisane ispravnim redoslijedom. 
Naputak: znamenke dobivene uzastopnim dijeljenjem ubacivati u polje. Ispisati 
članove polja obrnutim redoslijedom. Koliko članova mora imati polje pri definiciji da 
bi se mogla obaviti pretvorba bilo kojeg pozitivnog cijelog broja tipa unsigned int
(pretpostavlja se da int koristi 4 okteta). 

*/

#include <stdio.h>
#define HEX_SIZE 8

int main(void){

    char hex_broj[HEX_SIZE] = {};
    int broj;
    int iter = 0;

    printf("Upisite pozitivan cijeli broj: ");
    scanf("%d", &broj);

    for (int i = 0; i < HEX_SIZE; i++){
        
        switch (broj % 16){
            case 15: hex_broj[iter++] = 'F'; break;
            case 14: hex_broj[iter++] = 'E'; break;
            case 13: hex_broj[iter++] = 'D'; break;
            case 12: hex_broj[iter++] = 'C'; break;
            case 11: hex_broj[iter++] = 'B'; break;
            case 10: hex_broj[iter++] = 'A'; break;
            default: hex_broj[iter++] = (broj % 16) + 48; break;
            
        }

        broj /= 16;
        
    }

  

    for (iter = 1; iter <= HEX_SIZE; iter++) printf("%c", hex_broj[HEX_SIZE - iter]);
 
    return 0;
}