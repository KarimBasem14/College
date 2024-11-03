#include <stdio.h>

int main(void){
    int running = 1;
    int n;
    double result = 1;
    while(running){
        printf("Enter a number: ");
        scanf("%d", &n);
        for (int i = n; i > 1; i-- ){
            result *= i;
            // printf("i = %d, result = %d\n", i, result);
            
        }
        printf("Factorial of %d is %f\n", n, result);
        result = 1;
    }}
