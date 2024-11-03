#include <stdio.h>

int main(void){
    int correct_num = 5;
    int guessed_num;
    while (1){
        do{
            printf("Guess a number between 1 and 10: ");
            scanf("%d", &guessed_num);
            if (guessed_num == correct_num){
                printf("Correct! You guessed the correct number\n");
                return 0;
            }
            else if (guessed_num < 1 || guessed_num > 10) {
                printf("I SAID BETWEEN 1 AND 10\n TRY AGAIN >:(\n");
            }
            else{
                printf("Incorrect number, try again!\n");
            }
        }
        while (guessed_num < 1 || guessed_num > 10); // Do that if guessed_num is not in my range of values
            

    }
    
    
}