#include <stdio.h>

int main(){
  int num = 3579;
  int k = 0;
  int numbers[100];

  while (num > 0) {
    int last_num = num % 10;
    num /= 10;
    numbers[k] = last_num;
    // printf("numbers[k] is %d\n", numbers[k]);
    k++;
  }

  for (int i = k-1; i >= 0; i--) {
    printf("%d\n", numbers[i]);
  }
}