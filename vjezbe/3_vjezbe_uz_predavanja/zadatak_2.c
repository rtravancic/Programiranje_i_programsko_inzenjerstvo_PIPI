/*

2. Napisati C program za pretvaranje vrijednosti temperature izražene u različitim mjernim 
jedinicama. Na početku program treba ispisati poruku: 

Program za konverziju Fahrenheit - Celsius i obrnuto. 


Za F u C upisite 1, a za C u F bilo koji drugi cijeli broj > 

Ako korisnik upiše broj 1, tada ispisati poruku 
Upisite temperaturu izrazenu u stupnjevima Fahrenheit > 
te s tipkovnice učitati realni broj koji predstavlja temperaturu izraženu u stupnjevima 
Fahrenheit, izračunati ekvivalentnu temperaturu izraženu u stupnjevima Celsius te ispisati 
temperaturu izraženu u obje jedinice 
xxxx.xxx st. F = xxxx.xxx st. C

Ako korisnik upiše bilo koji drugi cijeli broj, tada ispisati poruku 
Upisite temperaturu izrazenu u stupnjevima Celsius > 
te s tipkovnice učitati jedan realni broj koji predstavlja temperaturu izraženu u stupnjevima 
Celsius, izračunati ekvivalentnu temperaturu izraženu u stupnjevima Fahrenheit te ispisati 
temperaturu izraženu u obje jedinice 
xxxx.xxx st. C = xxxx.xxx st. F

*/

#include <stdio.h>

int main(void){
    float temp;
    int choice;
    printf("Program za konverziju Fahrenheit - Celsius i obrnuto.\nZa F u C upisite 1, a za C u F bilo koji drugi cijeli broj > ");
    scanf("%d", &choice);

    if (choice == 1){

        printf("Upisite temperaturu izrazenu u stupnjevima Fahrenheit >");
        scanf("%f", &temp);
        printf("%7.3f st. F = %7.3f st. C", temp, (temp-32)/1.8);

    } else{
        printf("Upisite temperaturu izrazenu u stupnjevima Celsius > ");
        scanf("%f", &temp);
        printf("%7.3f st. C = %7.3f st. F", temp, 1.8*temp + 32);
    }
    
    return 0;
}