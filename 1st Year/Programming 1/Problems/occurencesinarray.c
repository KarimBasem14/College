#include <stdio.h>
#define ARRAY_LENGTH 10

int main(void){
    int target;
    printf("Please enter the target number: ");
    scanf("%d", &target);
    int arr[ARRAY_LENGTH];
    // Making the array
    for(int i = 0; i < ARRAY_LENGTH; i++){
        scanf(" %d", &arr[i]);
    }

    int count = 0;
    for (int i = 0; i < ARRAY_LENGTH; i++){
        if (arr[i] == target){
            count++;
        }
    }
    printf("The number %d has occured %d times", target, count);

}