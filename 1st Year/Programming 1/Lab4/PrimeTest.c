#include <stdio.h>
#include <math.h>

int is_prime(long long num);

int main(){
    unsigned long long n;
    while (1) {
        printf("Enter a number to check if it is prime: ");
        int result = scanf("%llu", &n);

        // printf("result is %d\n", result);

        if (n >= 0) {
            if (is_prime(n) != 0) {
                printf("%llu is a prime number!\n", n);
            }
            else {
                printf("%llu is not a prime number! :( \n", n);
            }
        }
        else {
            printf("Number must be positive!\n");
        }
    }

}

int is_prime(long long num) {
    // int sqrt_num = pow(num, 0.5);
    for (int i = 2; i < num; i++) {
        // printf("Now dividing num by %d\n", i);
        // printf("num /%% i is %d\n", num % i);
        if (num % i == 0) {
            return 0;
        }

    }

}