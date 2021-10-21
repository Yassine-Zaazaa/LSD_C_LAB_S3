#include "header.h"

void check_msb(int num){
    int a = num >> (sizeof(int) * 8) - 1;
    if(a & num)
        printf("msb is set\n");
    else
        printf("msb is not set\n");
}

