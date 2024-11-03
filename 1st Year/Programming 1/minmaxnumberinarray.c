/*
    Task: Find min number and max number in array
*/

#include <stdio.h>
#define ARRAY_LENGTH 10 

int main(void){
    int max,min;
    int arr[ARRAY_LENGTH];

    // Making the array
    for(int i = 0; i < ARRAY_LENGTH; i++){
        scanf("%d", &arr[i]);
    }

    // max, min numbers
    max = arr[0];
    min = arr[0];
    for(int i = 0; i < ARRAY_LENGTH; i++){
        if(arr[i] > max){
            max = arr[i];
        }
        if(arr[i] < min){
            min = arr[i];
        }
    }
    printf("Max number is %d and Min number is %d", max, min);

}