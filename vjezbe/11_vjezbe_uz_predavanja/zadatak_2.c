/*

2. Korisnik uzastopno upisuje cijele brojeve u intervalu [1, 9]. Za svaki učitani broj 
ispisati broj riječima. Zanemariti brojeve koji su izvan dopuštenog intervala. 
Učitavanje prekinuti kada se upiše broj nula. Naputak: za određivanje "naziva" broja 
koristiti naredbu switch. Npr. 
3 
tri 
7 
sedam 
77 
zanemarujem 
1 
jedan 
0 

*/

#include <stdio.h>

int main(void){

    int broj;

    do{
        printf("\nUcitajte broj: ");
        scanf("%d", &broj);
        switch (broj){
            case 0: printf("nula"); break;
            case 1: printf("jedan"); break;
            case 2: printf("dva"); break;
            case 3: printf("tri"); break;
            case 4: printf("cetiri"); break;
            case 5: printf("pet"); break;
            case 6: printf("sest"); break;
            case 7: printf("sedam"); break;
            case 8: printf("osam"); break;
            case 9: printf("devet"); break;
        }
    } while (broj != 0);
    return 0;
}