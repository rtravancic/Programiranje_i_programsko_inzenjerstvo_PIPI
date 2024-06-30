/*

10. Napisati vlastitu funkciju myStrcat koja obavlja isto što i funkcija strcat definirana u string.h. U 
funkciji se ne smiju koristiti funkcije iz <string.h>.

*/


#include <stdio.h>

void myStrcat(char *dest, char *source, int length){
    int length_dest = 0;
    while(*(dest + length_dest) != '\0') length_dest++;
    int i = 0;

    while(*(source + i) != '\0' && i <= length){
        *(dest + length_dest) = *(source + i);
        i++;
        length_dest++;
    }

}


int main(void){
    char destinaiton[50] = "Marija";
    char source[] = "Ena";
    printf("Source niz: %s\nDestination niz: %s", source, destinaiton);
    myStrcat(&destinaiton[0], &source[0], 3);
    printf("\nRezultat: %s", destinaiton);

    return 0;
}