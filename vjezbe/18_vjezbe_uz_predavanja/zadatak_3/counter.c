#include <stdio.h>

void counter(float *polje, int duljina, int *veci, int *manji, int *jednaki){
    int v = 0;
    int m = 0;
    int j = 0;

    for(int i = 0; i < duljina; i++){
        if(*(polje + i) == 0) j++;
        else if(*(polje + i) > 0) v++;
        else m++;
    }

    *veci = v;
    *manji = m;
    *jednaki = j;   
}

