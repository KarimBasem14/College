/*
    Task: Given a number n print the sum of the first n numbers
*/

#include <stdio.h>

int main(void){
    int n;
    int sum1 = 0; // Not adding this and just initiallizing sum with no value makes sum take a garabage value


    printf("Enter the value of n: ");
    scanf("%d", &n);

    // First method
    for(int i = 0; i <= n; i++){
        sum1 += i;
    }
    printf("\nThe sum of the first %d numbers is %d (First method)", n, sum1);

    // Second method (using the math formula)
    // sum from 1 to n equals (n/2)*(n+1)
    int sum2 = (n/2) * (n+1);
    printf("\nThe sum of the first %d numbers is %d (Second method)", n, sum2);
}