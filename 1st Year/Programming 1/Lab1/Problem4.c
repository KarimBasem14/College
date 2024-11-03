#include <stdio.h>

int main(){
    while (1){
        int year;
    printf("Enter the year: ");
    scanf("%d", &year);
    if (year % 4 == 0){
        if (year % 400 == 0){
            printf("The year %d is a leap year!\n", year);
        }
        else if ( year % 100 == 0){
            printf("The year %d is not a leap year :(\n", year);
        }
        else {
            printf("The year %d is a leap year!\n", year);
        }
    }
    else{
        printf("The year %d is not a leap year :(\n", year);
    }
    }
}