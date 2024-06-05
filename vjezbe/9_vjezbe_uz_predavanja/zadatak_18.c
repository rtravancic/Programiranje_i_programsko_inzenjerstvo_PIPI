/*

18. Načinite program koji će ispisati sljedeću tablicu: 
 A. a b c d e f .F 
 B. b c d e f g .G 
 C. c d e f g h .H 
 D. d e f g h i .I 
 ... itd. 
 S. s t u v w x .X 
 T. t u v w x y .Y 
 U. u v w x y z .Z 
 
 Očekuje se da zadatak riješite pomoću dvije programske petlje, a ne npr. ovako: 
 printf("A. a b c d e f .F\n"); 
 printf("B. b c d e f g .G\n"); 
 printf("C. c d e f g h .H\n"); 
 printf("D. d e f g h i .I\n"); 
 ... itd.

*/


#include <stdio.h>

int main(void){
    int j = 97;
    for(int i = 65; i <= 85; i++){
        printf("%c. ", i);
         
        for (int k = j; k <= j+5; k++){
            printf("%c ", k);
        }
        j++;
        
        printf(".%c\n", i+5);
    }
    
    return 0;
}