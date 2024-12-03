#include <stdio.h>
#include <string.h>

#define string_size 16

void print_string(int string[], int size);
void decimal_to_binary(double n, int result[]);

int main(){
    double n = 0.0;
    while ( (int) n <= 0) {
        printf("Please enter a decimal number so I can convert it to binary: (Positive only)");
        scanf("%lf", &n);
    }
    printf("\nNote: This program uses 16 bits for the actual number and 16 bits for the decimal.\n");
    int binary[string_size] = {0};
    // print_string(binary, string_size);
    decimal_to_binary(n, binary);
    // printf("\n");
    // print_string(binary, string_size);


}

void print_string(int string[], int size) {
    for (int i = 0; i < string_size; i++) {
        printf("%d", string[i]);
    }
}

void decimal_to_binary(double n, int result[]) {
    // printf("Reached here 1");
    double actual_num = n;
    int remainder = 0;
    int index = string_size-1;
    while ((int)n > 0) {
        remainder = (int)n % 2;
        result[index] = remainder;
        n = (n - remainder) / 2;
        index--;
    }
    // printf("Reached here 2");
    n = actual_num;
    // Now account for decimals
    int decimals[string_size] = {0}; // Initialize to Zero
    double x = n - (int) n; // Contains the decimal part
    for (int i = 0; i < string_size; i++) {

        x = x * 2;
        decimals[i] = (int) (x);
        x = x - (int)x;

    }
    printf("%f = ", actual_num);
    print_string(result, string_size);
    printf(".");
    print_string(decimals, string_size);
}
