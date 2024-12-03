#include <stdio.h>
#include <math.h>
#define PI 3.14159



long factorial(int n);
double my_sine(int radian, int N);
double degree_to_radian(int degree);
double my_power(double n, int m);

int main(void){
    int N = 0;
    int degrees = 0;
    double sine = 0; // This must be a float for it to work
    while ( 1 ){
        while (N <= 0){
            printf("Give me N (Number of terms): ");
            scanf("%d", &N);
        }
        printf("Give me the angle in degrees: ");
        scanf(" %d", &degrees);
        printf("Sine of %d", degrees); // Displaying the angle before decrementing it
        sine = my_sine(degrees, N);
        // printf("k is %d", k);
        printf(" is %lf\n", sine); 
        sine = 0; // Reset so it doesn't add to it later on
        degrees = 0;
        N = 0;

    }
}

long factorial(int n){
    return (n <= 1 ? 1 : n*factorial(n-1));
}

double my_sine(int degrees, int N){
    int is_negative_degree = 0;
    if (degrees < 0) {
        is_negative_degree = 1;
        degrees = -1 * degrees;
    }
    while (degrees > 90){
        degrees = 180 - degrees; // sin(180-x) = sin(x)
        if (degrees < 0) {
            is_negative_degree = 1;
            degrees = -1 * degrees;
        }
        else {
            is_negative_degree = 0;
        }
    }

    double radian = degree_to_radian(degrees);

    // int k =0;
    double sine = 0;
    for(int i = 0; i < N; i++){
        // k++;
        int power = 2 * i + 1;
        sine += my_power(-1, i) * ( my_power(radian, power ) / (double)factorial(power));
    }
    return is_negative_degree ? -1 * sine : sine;
}

double degree_to_radian(int degree) {
    return (degree * (PI / (float) 180));
}

// modular exponentation
double my_power(double n, int m) {
    double result = 1;
    for (int i = 1; i <= m; i++) {
        result *= n;
    }
    return result;
}
