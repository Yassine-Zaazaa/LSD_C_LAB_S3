#include "header.h"

int main(){
    float sqrtt_2 = dichotomie(sq_2, 0, 3, 3);
    printf("%lf\n", sqrtt_2);
    sqrtt_2 = dichotomie(sq_2, 0, 3, 10);
    printf("%lf\n", sqrtt_2);
    sqrtt_2 = dichotomie(sq_2, 0, 3, 30);
    printf("%lf\n", sqrtt_2);
    return 0;
}