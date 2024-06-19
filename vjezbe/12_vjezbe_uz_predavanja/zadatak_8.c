/*

8. S tipkovnice učitati cijeli broj n koji mora biti iz intervala [3, 10]. Učitavanje broja n
ponavljati dok god ne bude ispravno upisan. Nakon toga s tipkovnice učitati n cijelih 
brojeva i pohraniti ih u polje ulaz. U polje parni prepisati sve parne vrijednosti, a u 
polje neparni prepisati sve neparne vrijednosti iz polja ulaz. Na kraju ispisati 
članove polja ulaz, parni i neparni (svako polje u svom retku, s članovima 
međusobno odvojenim prazninom).

*/

#include <stdio.h>

#define LOW 3
#define HIGH 10

int main(void){

    int n;

    do{
        scanf("%d", &n);
    } while(n < LOW || n > HIGH);

    int ulaz[10];
    int parni[10];
    int neparni[10];
    int iparni = 0;
    int ineparni = 0;


    for (int i = 0; i < n;){
        scanf("%d", &ulaz[i++]);
    }

    for (int i = 0; i < n;i++){
        if (ulaz[i] % 2 == 0) parni[iparni++] = ulaz[i];
        else neparni[ineparni++] = ulaz[i];
    }

    for (int i = 0; i < n;){
        printf("%d ", ulaz[i++]);
    }
    printf("\n");
    for (int i = 0; i < iparni;){
        printf("%d ", parni[i++]);
    }
    printf("\n");
    for (int i = 0; i < ineparni;){
        printf("%d ", neparni[i++]);
    }

    return 0;
}