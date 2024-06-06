/*

3. Korisnik uzastopno upisuje cijele brojeve u intervalu [1, 9]. Za svaki učitani broj 
ispisati od kojih je sve brojeva iz tog intervala učitani broj manji. Zanemariti učitane 
brojeve koji su izvan dopuštenog intervala. Učitavanje prekinuti kada se upiše broj 
nula. Naputak: koristiti naredbu switch s "propadanjem po labelama". Npr. 
3 
manji je od 4 
manji je od 5 
manji je od 6 
manji je od 7 
manji je od 8 
manji je od 9 
77 
zanemarujem 
9 
8 
manji je od 9 
0 

*/


#include <stdio.h>

int main(void){

    int broj;

    do{
        printf("\nUcitajte broj: ");
        scanf("%d", &broj);
        switch (broj){
            
            case 1: printf("Manji je od dva\n"); 
            case 2: printf("Manji je od tri\n");
            case 3: printf("Manji je od cetiri\n");
            case 4: printf("Manji je od pet\n");
            case 5: printf("Manji je od sest\n");
            case 6: printf("Manji je od sedam\n");
            case 7: printf("Manji je od osam\n");
            case 8: printf("Manji je od devet\n");
            case 9: break;
            default: printf("Zanemarujem\n");
        }
    } while (broj != 0);
    return 0;
}