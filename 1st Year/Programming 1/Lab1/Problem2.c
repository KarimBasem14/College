#include <stdio.h>
#include <math.h>

int main(){
    float x,y,z,a,b,c,d,e,f,g;
    printf("Enter the values for x,y,z,a,b,c,d,e,f,g: ");
    scanf("%f %f %f %f %f %f %f %f %f %f", &x,&y,&z,&a,&b,&c,&d,&e,&f,&g);
    printf("x,y,z,a,b,c,d,e,f,g : %f %f %f %f %f %f %f %f %f %f\n", x,y,z,a,b,c,d,e,f,g);
    float first_problem = (3*x + (2*pow(10,5))) / (4*x + (5.2 * pow(10,4)));
    printf("First Problem: %f\n", first_problem);
    float second_problem = 5 * pow((x+y+3)/(27+z),2);
    printf("Second Problem : %f\n", second_problem);
    float third_problem = (a + (b/c)) / (d+ (c / (f+g)));
    printf("Third Problem : %f\n", third_problem);
    float fourth_problem = pow(sin(x+y),2);
    printf("Fourth Problem: %f", fourth_problem);
    return 0;
}