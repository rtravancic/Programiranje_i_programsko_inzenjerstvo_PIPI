/*

4. Napišite program koji će ispisati prvih 25 prostih brojeva (uzimajući u obzir definiciju 
prema kojoj broj 1 nije primarni broj).

*/

#include <stdio.h>


int main(void){
    int count = 0;
    int flag;

    for(int i = 2; count < 25; i++){
        flag = 1;
        for (int j = i - 1; j > 1 ; j--){
            if (i%j == 0){
                flag = 0;
                break;
            }
        
        }

        if (flag == 1){
            count++;
            printf("\n%d. je %d", count, i);
        }
    }
}