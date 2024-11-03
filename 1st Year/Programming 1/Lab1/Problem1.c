#include <stdio.h>
#define PI 3.14159


int main(){
    int radius;
    char command;
    printf("Enter the Circle's radius: ");
    scanf("%d", &radius);
    printf("Radius: %d\n", radius);
    printf("Choose what you want to display : (D, C, A, Z for all): ");
    scanf(" %c", &command); // White space is needed before %c to ignore whitespace characters, else the scanf simply won't read your input
    // printf("command is %c", command);
    if (command == "z" || command == "Z") {
        printf("Diameter: %d\n", radius * 2);
        printf("Circumference: %f\n", radius *2* PI);
        printf("Area: %f\n", PI * radius * radius);
    }
    else if(command == 'd' || command == 'D') {
        printf("Diameter: %d\n", radius * 2);
    }
    else if(command == "c" || command == "C"){
        printf("Circumference: %f\n", radius *2* PI);
    }
    else if(command == "a" || command == "A"){
        printf("Area: %f\n", PI * radius * radius);
    }
    else {
        printf("Invalid Command");
    }
    
    return 0;
}