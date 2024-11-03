// // Online C compiler to run C program online
// #include <stdio.h>

// int main() {
//     int apples,dozens;
//     printf("Enter the number of apples: ");
//     scanf("%d", &apples);
//     dozens = apples / 12;
//     apples = apples % 12;
//     printf("You have : %d dozens and %d apples", dozens,apples);
//     return 0;
// }

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
	
    int n,sum,last_num;
    int x=10;
    while (1){
        printf("Enter number : ");
    scanf("%d", &n);
    //Complete the code to calculate the sum of the five digits on n.
    while (n > 0){
        last_num = n % x;
        sum += last_num;
        n = n - x;
        x = x * 10;
        
        
    }
    printf("%d", sum);
    }
    return 0;
}