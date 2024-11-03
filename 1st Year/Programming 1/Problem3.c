#include <stdio.h>


// C has static arrays, so I'll probably have to store values that I don't need inside my intersection and union arrays
// I am assuming that those irrelevant values have a value of -1 which means the user shouldn't give me -1

void remove_duplicates(int array[], int size, char * text);
int item_in_array(int item, int array[], int size);
void print_array(int array[], int size);

int main(void){
    // int size1 = 0;
    // int size2 = 0;

    // printf("Please enter the size of set1 and set2: ");
    // scanf(" %d", &size1, &size2);

    int size1 = 13; int size2 = 7;
    int array1[] = {1,1,3,4,5,0,0,6,7,8,4,1,2};
    int array2[] = {4, 6, 12, 1, 12,6,0};
    // int array1[size1], array2[size2];
    // printf("Enter set1: ");
    // for (int i = 0; i < size1; i++) {
    //     printf("hi\n");
    //     scanf("  %d ", &array1[i]);
    // }
    // printf("Enter set2: ");
    // for (int i = 0; i < size2; i++) {
    //     scanf(" %d", &array2[i]);
    // }

    int intersection[size1 + size2]; // Initializes the array to zeros
    int union_array[size1 + size2];

    // Union
    for (int i = 0; i < size1; i++) {
        union_array[i] = array1[i];
        // printf("i : %d\n", i);
    }
    for (int i = size1; i < size2 + size1; i++) {
        union_array[i] = array2[i-size1];
    }
    printf("Union array: ");
    print_array(union_array, size1 + size2);
    remove_duplicates(union_array, size1 + size2, "Union array without duplicates: ");
    // printf("Union array without duplicates: ");
    // print_array(union_array, size1 + size2);



    // Remove duplicates from array1 and array2
    // remove_duplicates(array1, size1);
    // remove_duplicates(array2, size2);
    // print_array(array1, size1);
    // print_array(array2, size2);

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


    // printf("Intersection without duplicates: ");
    // print_array(intersection,k);

    // Remove duplicates from array1 and array2 and print them

    remove_duplicates(array1, size1, "\nArray 1 without duplicates: ");
    // printf("Array 1 without duplicates: ");
    // print_array(array1, size1);
    remove_duplicates(array2, size2, "\nArray 2 without duplicates: ");
    // printf("Array 2 without duplicates: ");
    // print_array(array2, size2);

}

void remove_duplicates(int array[], int size, char * text){
    // int array_size = sizeof(array) / sizeof(int);
    int removed_duplicates[size];

    // I have to manually initialize the removed_duplicates to zero cause C gives an error if the static array has its size as a variable (size not known at compile)
    for (int i = 0; i < size; i++) {
        removed_duplicates[i] = 0;
    }


    int k = 0;
    for (int i = 0; i < size; i++){
        // if (array[i] == 4) {
        //     printf("---------i is %d\n", array[i]);
        //     printf("%d", item_in_array(array[i],removed_duplicates));
        // }
        // printf("Before: i: %d, array_i = %d\n", i, array[i]);;
        // print_array(removed_duplicates, size);

        if (item_in_array(array[i], removed_duplicates, size) == 0) {
            // printf("%d is not in removed_duplicates\n", array[i]);
            // print_array(removed_duplicates, size);
            removed_duplicates[k] = array[i];
            k++;
        }
        // printf("After: i: %d, array_i = %d\n", i, array[i]);;
        // print_array(removed_duplicates, size);


    }
    for (int i = 0; i < size; i++) {
        array[i] = removed_duplicates[i];
    }
    printf("%s", text);
    for (int i = 0; i < k; i++) {
        printf("%d ", array[i]);
    }
    // print_array(array, 20);
    // printf("\n-----------------------------------------------------------------------------------------------\n");
    // print_array(removed_duplicates, 20);

}

int item_in_array(int item, int array[], int size) {

    // Very wierd error idk buuuuuuuuuuut
    // I had const int size = sizeof(array) / sizeof(int) and for whatever reason that gave me a size of 2?????????????????
    // Passing size as a parameter seemed to fix it somehow!!!!

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