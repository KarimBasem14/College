#include <stdio.h>
#include <math.h>
#define PI 3.14159



long factorial(int n);

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
        while (degrees <= -90){
            degrees = 360 + degrees;
        }
        while (degrees >= 90){
            degrees = 180 - degrees; // sin(180-x) = sin(x)
        }

        float radian = degrees * (PI / (float) 180);
        // int k =0;
        for(int i = 0; i < N; i++){
            // k++;
            int power = 2 * i + 1;
            sine += pow(-1, i) * ( (double) pow(radian, (power) ) / (double)factorial(power));
        }
        // printf("k is %d", k);
        printf(" is %lf\n", sine); 
        sine = 0; // Reset so it doesn't add to it later on
        degrees = 0;
        N = 0;
        radian = 0;
    }
}

long factorial(int n){
    return (n <= 1 ? 1 : n*factorial(n-1));
}