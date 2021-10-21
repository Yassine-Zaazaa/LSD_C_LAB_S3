#include "header.h"

int main(){
    printf("Enter a number: ");
    int num, num2, byte;
    scanf("%d", &num);
    check_msb(num);
    printf("Now we print the bits.\n");
    print_bits(num);
    printf("Enter a number: ");
    scanf("%d", &num2);
    printf("\n");
    printf("Enter wich byte you want to print: ");
    scanf("%d", &byte);
    print_nth_byte(num2, byte);
    return 0;
}