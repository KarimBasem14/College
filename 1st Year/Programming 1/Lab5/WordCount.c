#include <stdio.h>
#include <ctype.h>
#define MAX 1000

int count_words(char str[], int len);

int main(){
  char input_str[MAX];
  int num_of_words = 0;

  // Read string for user
  fgets(input_str, MAX, stdin);


  num_of_words = count_words(input_str, MAX);


  printf("%d Words", num_of_words);

}

int count_words(char str[], int len) {
  int num_of_words = 0;
  for (int i = 1; i < len; i++) { // Loops from i = 1 so i-1 doesn't go out of the array's bounds.
    if ( (isspace(str[i])) && !isspace(str[i-1]) ) { // isspace() detects spaces and tabs and \n.
      if (str[i-1] == 't' && str[i-2] == '\\') {
        continue;
      }
      num_of_words++;
    }
    // fgets() puts \0 at the end of the string it reads, so if I loop through whatever is after \0 then I am looping through garabage values probably would give a wrong output.
    if ( str[i] == '\0') {
      break;
    }
  }
  return (num_of_words);
}