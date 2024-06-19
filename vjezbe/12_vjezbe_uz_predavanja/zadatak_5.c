/*

5. Cjelobrojno polje je potrebno napuniti s 500 prostih brojeva. Koristiti činjenicu da je 
neki broj x prost ukoliko nije djeljiv s niti jednim prostim brojem koji je manji od x. 
Nakon punjenja polja ispisati sadržaj polja. Naputak: u polje kao prvi član ubaciti 2. 
Za svaki sljedeći neparni broj ("broj kandidat") ispitivati je li djeljiv s bilo kojim prostim 
brojem koji se do tada već nalazi u polju prostih brojeva (pri tome uvijek preskočiti 
prvi član, tj. 2). Vanjskom petljom povećava se "broj kandidat", a unutarnjom petljom 
se testira djeljivost "broja-kandidata" sa svim prethodno upisanim prostim brojevima 
osim 1. člana. Kakve se petlje ovdje moraju koristiti? 
 (za provjeru: petstoti prim broj je 3571) 

*/


#include <stdio.h>
#define SIZE 500

int main(void){
    int prosti[SIZE];
    prosti[0] = 2;
    int count = 1;
    int flag_not_div;
    int kandidat = prosti[0];

    while (count < 500){

        kandidat += 1 + (kandidat % 2);
        flag_not_div = 1;

        for(int i = count - 1; i >= 0; i--){
            if (kandidat % prosti[i] == 0){
                flag_not_div = 0;
                break;
            }
        }

        if (flag_not_div == 1){
            prosti[count++] = kandidat;
        }

    }

    printf("%d", prosti[SIZE - 1]);


    return 0;
}