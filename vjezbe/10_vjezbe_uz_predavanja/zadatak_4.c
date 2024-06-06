/*

4. Isto kao prethodni zadatak, ali riješiti pomoću petlje s ispitivanjem uvjeta na kraju. 
Zašto takva vrsta petlje nije pogodna za rješavanje ovog zadatka? 

*/


#include <stdio.h>
#include <math.h>

int main(void){
    int broj;
    int total = 0;
    int bin;

    printf("\nUpisite broj(0-16): ");
    scanf("%d", &broj);
    if (broj > 0 && broj <= 16){
        do{
            
            printf("\nUnesite binarnu znamenku: ");
            scanf("%d", &bin);
            total += bin * pow(2, --broj);
            
        } while (broj > 0);
        

    } else printf("\nUnesen je neispravan broj.");
    
    printf("\nDekadski ekvivalent je broj: %d", total);
    return 0;
}