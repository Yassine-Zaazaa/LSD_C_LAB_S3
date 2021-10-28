#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float dichotomie(float (*f)(float), float a, float b, int n){
    if(f(a) * f(b) > 0){
        exit(EXIT_FAILURE);
    }
    int res;
    for(int i = 0; i<n; i++){
        if(f((a+b)/2) > 0){
            b = (a+b)/2;
            res = b;
        }

        if(f((a+b)/2) < 0){
            a = (a+b)/2;
            res = a;
        }
        if(f((a+b)/2) == 0){
            res = (a+b)/2;
            return res;
        }
    }
    return res;
}


float dichotomie2(float (*f)(float), float a, float b, float e){
    int n = (int)log((b-a)/e) / log(2);
    return dichotomie(f, a,b,n);
}
