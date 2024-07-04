/*

7. U tekstualnoj datoteci mjerenja.txt nalaze se zapisi o mjerenjima temperature u obliku: 
#ddd#NN#hh#x.x#hh#xx.x#hh#xx.x#...hh#xx.x# 
U zapisu se nalazi redni broj dana u godini (ddd), broj mjerenja obavljenih tog dana (NN), 
sat u kojem je obavljeno mjerenje (hh), izmjerena temperatura (x.x). Npr. 
#175#4#3#-11.5#12#2.0#16#5.0#22#-2.5# 
Prethodni zapis znači da su u danu s rednim broje 175 obavljena 4 mjerenja: u 3 sata 
temperatura je bila -11.5 stupnjeva, u 12 sati 2 stupnja, u 16 sati 5 stupnjeva i u 22 sata -2.5 
stupnja. 
Za svaki zapis iz datoteke mjerenja.txt ispisati na zaslon redni broj dana i srednju 
vrijednost izmjerenih temperatura za taj dan.

*/


#include <stdio.h> 
int main (void) { 
    FILE *du; 
    int dan, brojMj, sat, i; 
    float temp; 
    float suma; 
    char c; 
    
    du = fopen("mjerenja.txt", "r"); 
    while (fscanf(du, "%c%d%c%d%c", &c, &dan, &c, &brojMj, &c) == 5) { 
        suma = 0.0f; 
        for (i = 0; i < brojMj; ++i) { 
            fscanf(du, "%d%c%f%c", &sat, &c, &temp, &c); 
            suma += temp; 
        } 
        printf("%3d: %f\n", dan, suma/brojMj); 
        /* sad procitati \n koji je ostao neprocitan */ 
        fscanf(du, "%c", &c); 
    } 
    
    fclose(du); 
    return 0; 
} 