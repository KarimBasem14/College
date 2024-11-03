#include <stdio.h>
#define ARRAY_LENGTH 10

int main(void){
    int arr[ARRAY_LENGTH];
    int arr_result[ARRAY_LENGTH];

    printf("Enter the array: ");
    for(int i = 0; i < ARRAY_LENGTH; i++){
        scanf("%d", &arr[i]);
    }

    int j = 0;
    for (int i = ARRAY_LENGTH - 1; i >= 0; i-- ){
        arr_result[j] = arr[i];
        j++;
    }

    // Printing the result
    for (int i = 0; i < ARRAY_LENGTH; i++){
        printf("%d ", arr_result[i]);
    }
    
}