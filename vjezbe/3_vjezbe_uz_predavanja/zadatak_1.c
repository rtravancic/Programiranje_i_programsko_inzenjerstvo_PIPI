/*

1. Pročitajte i zaključite što bi sljedeći program (kada bi bio ispravan) trebao raditi. 
Napišite tekst programskog zadatka koji bi odgovarao programu. Nacrtajte dijagram toka. 
Zatim pomoću copy-paste upišite program u datoteku na svom računalu i pokušajte ga 
prevesti. Ispravite sve vrste pogrešaka i testirajte s različitim ulaznim podacima. 
#definiraj PI 3,1415926                                                     ---> define tu
float main (void) {                                                         ---> moze float al ono
 int a; 
 float b; 
 printf("Upisite duljinu velike poluosi a>"); 
 scanf("%f", &a);                                                           ---> a je int
 printf("Upisite duljinu male poluosi b>"); 
 scanf("%f", &b); 
 if (a > 0) { 
 if (b > 0) { 
 povrsina = A x B x pi;                                                     ---> ide * ne x     
 printf("Povrsina elipse s poluosima a=%f i b=%f je %f", povrsina);         ---> fali jos var 
 scanf("%f", &b); 
 } else { 
 printf("Duljina male poluosi mora biti veca od nule.\nKraj. "); 
 } 
 } else { 
 printf("Duljina velike poluosi mora biti veca od nule.\nKraj. "); 
 } 
 return O; 
}

*/


#include <stdio.h>

#define PI 3.1415926 

int main (void) { 
    float a, b, povrsina; 


    printf("Upisite duljinu velike poluosi a>"); 
    scanf("%f", &a); 
    printf("Upisite duljinu male poluosi b>"); 
    scanf("%f", &b); 

    if (a > 0) { 
        if (b > 0) { 
            povrsina = a* b * PI; 
            printf("Povrsina elipse s poluosima a=%f i b=%f je %f", a, b, povrsina); 

        } else { 
            printf("Duljina male poluosi mora biti veca od nule.\nKraj. "); 
        } 
    } else { 
        printf("Duljina velike poluosi mora biti veca od nule.\nKraj. "); 
        } 
    return 0; 
}
