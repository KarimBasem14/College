#include <stdio.h>
#include <stdlib.h>


// C has static arrays, so I'll probably have to store values that I don't need inside my intersection and union arrays


void remove_duplicates(int array[], int size, char * text);
int item_in_array(int item, int array[], int size);
void print_array(int array[], int size);

int main(void){
    int size1 = 0;
    int size2 = 0;

    printf("Please enter the size of set1 and set2: ");
    scanf("%d %d", &size1, &size2);

    // int size1 = 13; int size2 = 7;
    // int array1[] = {2, 4, 4, 6, 8, 8,0, 10, 12, 14,0};
    // int array2[] = {1, 2, 3, 4, 5, 5,0, 6, 7, 8, 9, 10, 10};


    int array1[size1], array2[size2];
    printf("Enter set1: ");
    for (int i = 0; i < size1; i++) {

        scanf(" %d", &array1[i]);
    }
    print_array(array1, size1);
    printf("Enter set2: ");
    for (int i = 0; i < size2; i++) {
        scanf(" %d", &array2[i]);
    }
    printf("Array2 : ");
    print_array(array2, size2);

    int intersection[size1 + size2];
    int union_array[size1 + size2];

    // Union
    for (int i = 0; i < size1; i++) {
        union_array[i] = array1[i];
    }
    for (int i = size1; i < size2 + size1; i++) {
        union_array[i] = array2[i-size1];
    }
    printf("Union array: ");
    print_array(union_array, size1 + size2);
    remove_duplicates(union_array, size1 + size2, "Union array without duplicates: ");


    // Intersection
    int k = 0;
    for (int i = 0; i < size1; i++){
        for (int j = 0; j < size2; j++){
            if (array1[i] == array2[j]){
                intersection[k] = array1[i];
                k++;
            }
        }
    }



    // Print Intersection
    printf("\nIntersection : ");
    for (int i = 0; i < k; i++){
        printf("%d ", intersection[i]);
    }
    printf("\n");

    // Remove duplicates from intersection and print it
    remove_duplicates(intersection,k, "Intersection without duplicates: ");


    // Remove duplicates from array1 and array2 and print them
    remove_duplicates(array1, size1, "\nArray 1 without duplicates: ");
    remove_duplicates(array2, size2, "\nArray 2 without duplicates: ");


}

void remove_duplicates(int array[], int size, char * text){

    // According to my search, array allocation on the stack is more likely to contain garbage values from arrays that were used before it especially if there is a repeated function call
    // array allocation on the heap is less likely to have that behaviour
    int * removed_duplicates = malloc(size*sizeof(int));

    // int removed_duplicates[size];

    // I have to manually initialize the removed_duplicates to zero cause C gives an error if the static array has its size as a variable (size must be known at compile time)
    for (int i = 0; i < size; i++) {
        removed_duplicates[i] = 0;
    }

    int k = 0; // Tracks how many items are added in removed_duplicates
    int x = 0; // This variable is used to enter the else if only once.

    for (int i = 0; i < size; i++){

        if (item_in_array(array[i], removed_duplicates, size) == 0 && array[i] != 0) {

            removed_duplicates[k] = array[i];
            k++;
        }
        // removed_duplicates is initialized to zeros so I am handling the possibility that array has zeros differently
        // if array[i] is a zero then add 1 to k so that the length of the array that i will print increases by 1
        // zero is already in removed_duplicates so i don't need to make removed_duplictes[k] = 0
        // x is used to make this only once
        // Why this instead of just initializing to garbage values? if an array is made from a function and you call that function more than once, the garbage values of that array would eventually rely on previous values of that array from previous function calls :/
        else if (array[i] == 0 && x == 0) {
            x++;
            k++;
        }

    }
    for (int i = 0; i < size; i++) {
        array[i] = removed_duplicates[i];
    }
    // printf("\n");
    // printf("Removed Duplicates array after: ");
    // print_array(removed_duplicates, size);
    // printf("\n");
    printf("%s", text);
    for (int i = 0; i < k; i++) {
        printf("%d ", array[i]);
    }
    free(removed_duplicates);
}

int item_in_array(int item, int array[], int size) {

    // Very wierd error idk buuuuuuuuuuut
    // I had const int size = sizeof(array) / sizeof(int) and for whatever reason that gave me a size of 2?????????????????
    // Passing size as a parameter seemed to fix it somehow!!!!
    // Update from TA: This is a known behaviour in C, it is just how C works, if you pass an array to a function you just can't get its size 

    for (int i = 0; i < size; i++) {
        if (item == array[i]) {
            return 1;
        }

    }
    return 0;

}

void print_array(int array[], int size) {

    for (int i = 0; i < size; i++){
        printf("%d ", array[i]);
    }
    printf("\n");
}
