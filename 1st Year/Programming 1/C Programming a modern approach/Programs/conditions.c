// Online C compiler to run C program online
#include <stdio.h>

int main() {
    // char time;
    // int hour,minute;
    // while(1){
    // printf("Enter a 24-hour time: ");
    // scanf("%i:%i", &hour, &minute);
    // if (hour > 12){
    //     hour = hour - 12;
    //     time = 'P';
    // }
    // else {
    //     time = 'A';
    // }
    // printf("Equivalent 12-hour time: %i:%02d %cM\n", hour, minute, time);
    // }

    int n = 6;
    printf("This program prints a table of squares of %i elements", n);

    while( n < 1 ){
        printf("\t %i \t %i", n, n * 5);
        
    }
}