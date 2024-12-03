#include <stdio.h>

// Check even or odd number of 1bits

#define MAX 10

int main() {
    long long num = 1538;
    int i = 4;
    int j = 6;

    // To modify the kth bit to 1: N = N | (1 << K)
    num = num | (1 << i);

    // Getting the jth bit
    int j_bit = (num >> j) & 1;
    if (j_bit == 1) {
        num = num ^ (1 << j);
    }
    printf("num : %d", num);

}

