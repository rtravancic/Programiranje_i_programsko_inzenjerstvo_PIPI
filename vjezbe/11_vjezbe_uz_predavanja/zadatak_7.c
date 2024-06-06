/*

7. Napišite program za izračunavanje n! koji za realizaciju "petlje" koristi goto naredbu. 
Napomena: ovaj zadatak služi za vježbu, a ne za demonstraciju načina na koji bi 
trebalo rješavati zadatke s programskim petljama! Programske petlje se u pravilu ne 
smiju realizirati pomoću naredbe goto!

*/

#include <stdio.h>

int main(void){
    int n, fact = 1;
    int i;
    printf("Unesite broj n: ");
    scanf("%d", &n);
    i = n;

    petlja:
        fact *= n--;
        if (n > 1) goto petlja;

    printf("%d! = %d",i, fact);
    return 0;
}