/*
11. Napisati funkciju tipa int koja vraća broj bajtova koji se koriste za pohranu podatka tipa int. 
Napomena: različiti prevodioci koriste različiti broj bajtova, te se funkcija koja koristi sljedeću 
naredbu return ne može smatrati ispravnom: 
 return 4; 

*/
#include <stdio.h>

int kolikobajtova(void){ 
    return sizeof(1);
    }


int main(void){
    printf("Int ima %d bajtova.", kolikobajtova());
    return 0;
}