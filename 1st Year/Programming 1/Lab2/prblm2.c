#include <stdio.h>

int main(void){
    int running = 1;
    int n;
    
    while(running){
        printf("Enter a number: ");
        scanf("%d", &n);
        
        if (n % 2 == 0){ // if n is Even
            for(int i = n; i > 0; i-=2){
                printf("%d ", i);
            }
            printf("\n");
        }
        else {
            for(int i = n; i > 0; i-=2){
                printf("%d ", i);
            }
            printf("\n");
        }
        
    }}
