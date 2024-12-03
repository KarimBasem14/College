#include <stdio.h>
#include <math.h>

double polynomial(double x);

int main(){
    double n;
    printf("Enter a number: ");
    scanf("%lf", &n);

    printf("Answer is %lf", polynomial(n));
}

double polynomial(double x) {
    double t1 = 3 * pow(x,5);
    double t2 = 2 * pow(x, 4);
    double t3 = -5 * pow(x, 3); // Notice How I put the negative here and not in the return
    double t4 = -1 * pow(x, 2);
    double t5 = 7 * x;
    double t6 = -6;
    return (t1+t2+t3+t4+t5+t6);
}