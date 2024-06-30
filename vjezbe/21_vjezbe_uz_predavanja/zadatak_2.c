/*

2. S tipkovnice učitati cijeli broj n uz kontrolu da je 3 ≤ n ≤ 20. Na slučajan način odabrati n
velikih slova (među znakovima A-Z) i ispisati ih na zaslon. 

*/


#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main(void){

    srand((unsigned)time(NULL));

    int n;
    do{
        printf("\nUpisite broj n iz intervala [3, 20]: ");
        scanf("%d", &n);

    } while(n < 3 || n > 20);
    
    printf("\n");
    for(int i = 0; i < n; i++) printf("%c ", rand()%26 + 65 );

    return 0;
}