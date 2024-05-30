/*

2. S tipkovnice učitati polumjer kruga (realni broj). Ako je učitani broj pozitivan, izračunati 
opseg i površinu kruga, te na zaslon ispisati: 
zadani polumjer je: xxxxxx.xxxx 
opseg kruga je: xxxxxx.xxxx 
povrsina kruga je: xxxxxx.xxxx 
inače (ako učitani broj nije pozitivan) na zaslon treba ispisati: 
broj xxxxxx.xxxx nije ispravan polumjer kruga

*/

#define _USE_MATH_DEFINES
#include <stdio.h>
#include <math.h>

int main(void){
    float radius;

    printf("Input the value of radius: ");
    scanf("%f", &radius);

    if (radius > 0){
        printf("Radius: %10.4f\nCircumference: %10.4f\nArea: %10.4f", radius, radius* 2 * M_PI, M_PI * pow(radius,2));
    }

    return 0;
}