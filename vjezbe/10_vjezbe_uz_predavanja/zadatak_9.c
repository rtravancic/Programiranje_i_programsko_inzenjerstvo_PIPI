/*

9. Prepravite program iz prethodnog zadatka tako da se na mjestima gdje bi se ispisao 
"mali" samoglasnik, umjesto toga ispiše znak '?'. 
*/


#include <stdio.h>

int main(void){
    int j = 97;
    int flag;
    for(int i = 65; i <= 85; i++){
        printf("%c. ", i);
         
        for (int k = j; k <= j+5; k++){
            flag = (k == 'a')||(k == 'e') || (k == 'i')||(k == 'o')||(k =='u');
            printf("%c ", (flag == 1 ? '?' : k)  );
        }
        j++;
        
        printf(".%c\n", i+5);
    }
    
    return 0;
}