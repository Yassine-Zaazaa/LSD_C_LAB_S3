#include <stdio.h>
#include <stdlib.h>


int main(){
    printf("Enter the number of elements in the array: ");
    int n;
    scanf("%d", &n);
    printf("%d\n", n);
    int array[n];
    int * ptr = array;
    printf("Enter n elements: \n");
    int i = 0;
    while(i<n){
        scanf("%d",ptr);
        ptr++;
        i++;
    }
    ptr = array;
    printf("[%d, ", *ptr);
    ptr++;
    i = 0;
    while(i<n-2){
        printf("%d, ", *ptr);
        ptr++;
        i++;
    }
    printf("%d]\n", *ptr);
}