/*

2. Napišite funkciju toApsDim koja vrijednosti elemenata cjelobrojnog jednodimenzijskog polja 
mijenja u njihove apsolutne vrijednosti. Funkciju, glavni program i prototipove smjestite u tri 
zasebne datoteke. Testirati prevođenje na dva načina: 
• tako da se oba modula prevedu i povežu samo jednim pozivom prevodioca 
• tako da se zasebno prevede svaki modul, a zatim se dobiveni objektni kôd poveže u 
izvršni kôd

*/


void toApsDim(int *p, int duljina){
    int i = 0;
    while(i < duljina){
        *(p + i) = *(p + i) > 0 ? *(p + i) : -*(p + i);
        i++;
    }
}