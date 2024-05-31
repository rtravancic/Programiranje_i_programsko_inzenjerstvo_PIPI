/*

1. Pročitajte i zaključite što bi sljedeći program (kada bi bio ispravan) trebao raditi. 


#include <stdio.h>;                                     ---> tocka zarez je viska
int mein (void) {                                       ---> treba bit int main(void)
 integer xa; ya; xb; yb; xc; yc;                        ---> int i zarez umjesto ;
 printf("Upisite koordinate vrha trokuta A >");         
 scan("%d %d", &xa, &ya);                               ---> scanf
 printf("Upisite koordinate vrha trokuta B >"); 
 scan("%d %d", &xb, &yb);                               ---> scanf
 printf("Upisite koordinate vrha trokuta C >"); 
 scan("%d %d", &xc, &yc);                               ---> scanf
 xTezista = xa + xb + xc / 3;                           ---> nije prethodno deklarirana varijabla, zagrade
 yTezista = ya + yb + yc / 3;                           ---> nije prethodno deklarirana varijabla, zagrade
 printf("Teziste trokuta A(%d, %d), B(%d, %d), C(%d, %d) jest T(%d, %d)"  ---> %f za tezista
 , xa, ya, xb, yb, xc, yc, xTezista, yTezista); 
return 0                                                ---> ; fali
} 
Zatim pomoću copy-paste upišite program u datoteku na svom računalu i pokušajte ga 
prevesti. Prvo ispravite isključivo sintaktičke pogreške. Nakon toga ispravite pogreške 
povezivanja. Kada se program uspješno prevede, testirajte program s različitim ulaznim 
podacima: 
- za vrhove trokuta s koordinatama (0, 0), (3, 3) i (6, 0) 
- za vrhove trokuta s koordinatama (0, 0), (1, 1) i (2, 0) 
- za vrhove trokuta s koordinatama (0, 0), (1.5, 1.5) i (3, 0) 
Ispravite sve logičke pogreške. 
Uputa: pri rješavanju ovog zadatka korisno je poslužiti se C prevodiocem, koji će otkriti 
one sintaktičke pogreške i pogreške povezivanja koje sami možda ne uspijete uočiti. 

*/


#include <stdio.h>

int main (void) { 
 int xa, ya, xb, yb, xc, yc; 
 float xTezista, yTezista;
 printf("Upisite koordinate vrha trokuta A >"); 
 scanf("%d %d", &xa, &ya); 
 printf("Upisite koordinate vrha trokuta B >"); 
 scanf("%d %d", &xb, &yb); 
 printf("Upisite koordinate vrha trokuta C >"); 
 scanf("%d %d", &xc, &yc); 
 xTezista = (float)(xa + xb + xc) / 3; 
 yTezista = (float)(ya + yb + yc) / 3; 
 printf("Teziste trokuta A(%d, %d), B(%d, %d), C(%d, %d) jest T(%f, %f)" 
 , xa, ya, xb, yb, xc, yc, xTezista, yTezista); 
 return 0;
} 