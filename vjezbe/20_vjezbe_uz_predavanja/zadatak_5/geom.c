#include "geom.h"
#include "math.h"
double udaljToc(tTocka t1, tTocka t2){
    return sqrt(pow(t1.x - t2.x, 2) + pow(t1.y - t2.y, 2));
}