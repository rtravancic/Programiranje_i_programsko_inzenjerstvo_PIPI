/*

11. Ispišite sve pitagorine trojke čiji su članovi veći od 0 i manji ili jednaki 100. Ispis treba 
izgledati ovako (objašnjenje: oznaka 3^2 u sljedećem ispisu ima značenje 32
): 
1. trojka: 3^2 + 4^2 = 5^2 
2. trojka: 4^2 + 3^2 = 5^2 
3. trojka: 5^2 + 12^2 = 13^2 
4. trojka: 6^2 + 8^2 = 10^2 
5. trojka: 7^2 + 24^2 = 25^2 
 ... itd. 
101. trojka: 80^2 + 60^2 = 100^2 
102. trojka: 84^2 + 13^2 = 85^2 
103. trojka: 84^2 + 35^2 = 91^2 
104. trojka: 96^2 + 28^2 = 100^2 
Uputa: zadatak možete riješiti tako da pomoću tri ugniježđene petlje testirate svaku 
kombinaciju 3 cijela broja: 1 1 1; 1 1 2; 1 1 3; ... 1 1 99; 1 1 100; 1 2 1; 1 2 2; ...; 1 2 
100; 1 3 1; ... Ispišite samo one kombinacije 3 cijela broja koji zadovoljavaju "uvjet 
pitagorine trojke".

*/

#include <stdio.h>

int main(void){
    int count = 0;
    for (int i = 1; i <= 100; i++ ){
        for (int j = 1; j <= 100; j++ ){
            for (int k = 1; k <= 100; k++ ){
                if ((i*i + j*j) == (k*k)){
                    printf("\n%d. trojka:\t%d^2\t+\t%d^2\t=\t%d^2", ++count, i, j, k);
                    break;
                }
            }
        }
    }

    return 0;
}