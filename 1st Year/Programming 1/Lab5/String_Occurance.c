#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX_STR 1000
#define MAX_WORD 500

int count_occurances(char str[], char word[], int len_str, int len_word);

int main() {
    char str[MAX_STR];
    char word[MAX_WORD];

    fgets(str, MAX_STR, stdin);
    fgets(word, MAX_WORD, stdin);

    int num_of_occurances = count_occurances(str, word, strlen(str) - 1, strlen(word) - 1); // strlen(str) - 1 as fgets adds a \n to the end of the string which i don't want to count
    printf("Total number of occurances : %d", num_of_occurances);
}

int count_occurances(char str[], char word[], int len_str, int len_word) {
    int j = 0; // j points to a character in word
    int count = 0; // Number of occurances
    // aabacd aabaaba aabcaaba
    for (int i = 0; i < len_str; i++) {
        if (isspace(str[i])) { // Used to increment i if str[i] is a space.
            continue;
        }
        if (str[i] == word[j]) {
            j++; // Make j point to the next char in word
        }
        else {
            j = 0; // If they are not equal then make j point to the first char in word again
        }
        if (j == len_word - 1) { // len - 1 as j starts counting from 0.
            printf("Occurance at index %d\n", i-2); // i - 2 only so that it matches the pdf ¯\_(ツ)_/¯
            j = 0;
            count++;
        }
    }
    return count;
}