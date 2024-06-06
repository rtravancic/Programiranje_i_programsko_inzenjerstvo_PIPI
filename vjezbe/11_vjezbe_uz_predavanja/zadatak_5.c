/*

5. Napišite program koji će ispisati sve proste brojeve iz intervala [1000, 10000].

*/

#include <stdio.h>


int main(void){
    int count = 0;
    int flag;

    for(int i = 1000; i <= 10000; i++){
        flag = 1;
        for (int j = i - 1; j > 1 ; j--){
            if (i%j == 0){
                flag = 0;
                break;
            }
        
        }

        if (flag == 1){
            printf("\n%d. je %d", ++count, i);
        }
    }

    return 0;
}