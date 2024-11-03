#include <stdio.h>

int main(){
    while (1){
    int x,y;
    char z;
    printf("Enter x and y: ");
    scanf("%d %d", &x, &y);
    
    // printf("%d", x);
    // int x = 7; // 0111
    // int y = 15; // 1111
    // char z;
    if ( 0 <= x && y <= 15){
        z = x;
        z = z << 4;
        z = z | y;
        printf("%i\n", z);
    }}
}