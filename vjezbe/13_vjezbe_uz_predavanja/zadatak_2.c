/*

2. Definirati i inicijalizirati trodimenzijsko cjelobrojno polje s dimenzijama koje sami 
odaberite (npr. 3, 4, 5). Koristiti inicijalizator s vitičastim zagradama (svaki sloj unutar 
svojih vitičastih zagrada, svaki redak sloja unutar svojih vitičastih zagrada). Ispišite 
polje po slojevima, u sljedećem obliku: 
x x x x x 
x x x x x 
x x x x x 

x x x x x 
x x x x x 
x x x x x 

x x x x x 
x x x x x 
x x x x x 

x x x x x 
x x x x x 
x x x x x

*/


#include <stdio.h>
#define D1 2
#define D2 3
#define D3 4

int main(void){

    int polje[D1][D2][D3] = {
        {{100, 101, 102, 103}, 
        {105, 106, 107, 108},
        {109, 110, 111, 112}},

        {{110, 111, 112, 113}, 
        {115, 116, 117, 118},
        {119, 120, 121, 122}}
    };

    for (int i=0; i < D1; i++){
        for(int j=0; j < D2; j++){
            for(int k=0; k < D3; k++){

                printf("%d ", polje[i][j][k]);
            }
            printf("\n");
        }
        printf("\n");
    }


    return 0;
}