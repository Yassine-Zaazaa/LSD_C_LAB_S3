#include "header.h"


float dichotomie2(float (*f)(float), float a, float b, float e){
    int n = (int)log((b-a)/e) / log(2);
    return dichotomie(f, a,b,n);
}
