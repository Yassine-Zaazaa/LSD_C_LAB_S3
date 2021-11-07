#include "header.h"

int main(){
    FILE *fp = NULL;
    fp= fopen("data.txt", "w");
    float *array = (float*)malloc(16 * sizeof(float));
    for(int i = 1; i < 16; i++){
        array[i] = dichotomie(f, 1, 2, i);
        fprintf(fp, "%lf\t %d\n", array[i], i);
    }
    printf("\n");
    free(array);
    return 0;
}