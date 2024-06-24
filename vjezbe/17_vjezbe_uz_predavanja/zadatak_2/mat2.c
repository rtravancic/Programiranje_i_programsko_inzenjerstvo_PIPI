/*
2. U modulu mat2.c napisati funkcije čiji su prototipovi navedeni u nastavku 

 Prototipove navedenih funkcija smjestiti u datoteku s prototipovima mat2.h. 
 Funkciju main ("glavni program") smjestiti u modul glavni.c U glavnom programu treba 
izračunati i na zaslon ispisati rezultate za: 
 factorial(0) 
 factorial(25) 
 factorial(26) 
 binCoeff(13, 3) 
 binCoeff(4, 4) 
 iabsolute(-5) 
 iabsolute(0) 
 iabsolute(-5.7f) 
 fabsolute(-5) 
 fabsolute(-5.7f) 
Testirati prevođenje na dva načina: 
• tako da se oba modula prevedu i povežu samo jednim pozivom prevodioca 
• tako da se zasebno prevede svaki modul, a zatim se dobiveni objektni kôd poveže u 
izvršni kôd
• koje datoteke su stvorene za vrijeme prevođenja na prvi, odnosno drugi način?


1.nacin gcc -ansi -Wall -pedantic-errors -o prog.exe mat2.c glavni.c
2.nacin     gcc -c glavni.c
            gcc -c mat2.c
            gcc glavni.o mat2.o prog.exe
*/



 float fabsolute(float x){

    return x > 0 ? x : -x;
 }


 int iabsolute(int n){

    return n > 0 ? n : -n;
 }


 int factorial(int n){
    if (n == 0) return 1;
    int rez = 1;
    for(int i = 2; i <= n; i++) rez *= i;
    return rez;
 }


 int binCoeff(int m, int n){

    return factorial(m) / (factorial(n) * factorial(m-n));
 }