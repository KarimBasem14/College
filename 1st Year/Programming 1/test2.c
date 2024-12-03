#include <stdio.h>

int fibonacci(int n);

int main() {
    int x = 55;
    int b = 4;
    int result[16] = {0};

    for (int i = 15; i >=0; i--) {
        int remainder = x % b;
        x /= b;
        result[i] = remainder;
    }

    for (int i = 0 ; i < 16; i++) {
        printf("%d", result[i]);
    }

}



