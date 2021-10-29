#include "header.h"

int main(){
    float sqrtt_2 = dichotomie(sq_2, 0, 3, 3);
    printf("3 iterations (dichotomie): %lf\n", sqrtt_2);
    sqrtt_2 = dichotomie(sq_2, 0, 3, 10);
    printf("10 iterations (dichotomie): %lf\n", sqrtt_2);
    sqrtt_2 = dichotomie(sq_2, 0, 3, 30);
    printf("30 iterations (dichotomie): %lf\n", sqrtt_2);
    sqrtt_2 = newton(sq_2, g, 3, 3);
    printf("3 iterations (newton): %lf\n", sqrtt_2);
    sqrtt_2 = newton(sq_2, g, 3, 10);
    printf("10 iterations (newton): %lf\n", sqrtt_2);
    sqrtt_2 = newton(sq_2, g, 3, 30);
    printf("30 iterations (newton): %lf\n", sqrtt_2);
    return 0;
}