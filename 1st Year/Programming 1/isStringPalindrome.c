#include <stdio.h>
// #define ARRAY_LENGTH 10

int main(void){
    char arr[] = "level";
    int ARRAY_LENGTH = sizeof(arr) / sizeof(arr[0]);
    char arr_result[ARRAY_LENGTH];

    // printf("Enter the array: ");
    // scanf("%s", &arr);

    int j = 0;
    for (int i = ARRAY_LENGTH - 1; i >= 0; i-- ){
        arr_result[j] = arr[i];
        j++;
    }

    // Printing the result
    for (int i = 0; i < ARRAY_LENGTH; i++){
        printf("%c", arr_result[i]);
    }
    printf("\n");
    for (int i = 0; i < ARRAY_LENGTH; i++){
        printf("%c", arr[i]);
    }
    printf("\n");

    // Checking if palindrome
    int k = 0;
    printf("%c\n", arr_result[0]);
    for (int i = 0; i < ARRAY_LENGTH; i++){
        if (arr[i] != arr_result[i]){
            printf("%c%c\n", arr[i], arr_result[i]);
            k++;
            // printf("%d\n", k);
        }
    }
    if (k == 0){
        printf("The string is a palindrome");
    }
}