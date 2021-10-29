#include "header.h"

int main(){
    float *array = (float*)malloc(16 * sizeof(float));
    for(int i = 1; i < 16; i++){
        array[i] = dichotomie(f, 1, 2, i);
        printf("%lf\t", array[i]);
    }
    printf("\n");
    free(array);
    return 0;
}