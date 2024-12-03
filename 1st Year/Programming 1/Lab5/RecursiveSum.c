#include <stdio.h>

long long sum(long long num);

int main(){
  long long N = 0;
  char term; // Used for validation, so the user can't enter a float.

  while (N <= 0) {
    printf("Enter the number you want to sum its digits: ");
    int scan_result = scanf(" %lld%c", &N, &term);
    // printf("Scan result is %d, term is %c\n", scan_result, term);
    if (!(scan_result == 2 && term == '\n')) {
      printf("WHY ARE YOU ENTERING A FLOAT?\n");
      return 1;
    }
    else if (N == 0) {
      printf("Why do you want to sum 0? Try Again.\n");
    }
    else if (N < 0) {
      printf("Obviously can't take a negative number. Try Again.\n");
    }
  }
  printf("%lld", sum(N));

}

long long sum(long long num) {
  // get last digit
  if (num != 0){
    int last_digit = num % 10;
    return (last_digit + sum(num / 10));
  }
}