#include <stdio.h>

int main(void){
    // printf("        *\n");
    // printf("       *\n");
    // printf("      *\n");
    // printf("     *\n");
    // printf("*   *\n");
    // printf(" * *\n");
    // printf("  *\n");


    // float amount;
    // printf("Enter an amount: ");
    // scanf("%f", &amount);
    // printf("With tax added: $%.2f", amount + amount * 0.05);

    // float amount;
    // printf("Enter a dollar amount: ");
    // scanf("%f", &amount);
    // int bills_20 = amount / 20;
    // printf("$20 bills: %d\n", bills_20);
    // amount = amount - (20 * bills_20);
    // int bills_10 = amount / 10;
    // printf("$10 bills: %d\n", bills_10);
    // amount = amount - (10 * bills_10);
    // int bills_5 = amount / 5;
    // printf("$5 bills: %d\n", bills_5);
    // amount = amount - (5 * bills_5);
    // int bills_1 = amount / 1;

    // printf("$1 bills: %d\n", bills_1);
    int day,month,year; 
while(1){
        printf("Enter a date (mm/dd/yyyy): ");
    scanf("%i/%i/%i", &month, &day, &year);
    printf("%i %i %i", year, month, day);
}
}