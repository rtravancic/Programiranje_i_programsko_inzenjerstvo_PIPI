/*

2. S tipkovnice učitati koeficijente kvadratne jednadžbe ax2
 + bx + c = 0. Zavisno od 
učitanih koeficijenata, rješenja (korijene) kvadratne jednadžbe ispisati u jednom od tri 
navedena oblika: 
R = xxxxx.xxxx 
ili 
R1 = xxxxx.xxxx 
R2 = xxxxx.xxxx 
ili 
C1 = xxxxx.xxxx + xxxxx.xxxx * i 
C2 = xxxxx.xxxx - xxxxx.xxxx * i

*/

#include <stdio.h>
#include <math.h>

int main(void){

    float a, b, c, helper;
    printf("Ucitajte koeficijente kvadratne jednadzbe ax2 + bx + c = 0: ");
    scanf("%f %f %f", &a, &b, &c);

    printf("\nUcitana je jednadzba %.2fx2 + %.2fx + %.2f = 0", a, b, c);

    helper = b*b - 4 * a *c;
    // rj su (-b +- korj(b2 -4ac))/2a
    if (helper == 0){
        printf("\nR = %9.4f", - b / (2*a));
    }
    else if(helper > 0){
        printf("\nR1 = %9.4f\nR2 = %9.4f", (-b + sqrt(helper))/(2*a),  (-b - sqrt(helper))/(2*a));
    } else {
        printf("\nC1 = %9.4f + %9.4f * i\nC2 = %9.4f + %9.4f * i", (-b)/(2*a), sqrt(-helper)/(2*a),(-b)/(2*a), sqrt(-helper)/(2*a));
    }
    return 0;
}