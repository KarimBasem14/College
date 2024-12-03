#include <iostream>

using namespace std;

int main() {
    int sum_right = 0;
    int sum_left = 0;
    int n;
    cin >> n;
    int matrix[n][2];
    for (int i = 0; i < n; i++) {
        cin >> matrix[i][0] >> matrix[i][1];
        sum_left += matrix[i][0];
        sum_right += matrix[i][1];
    }

    // Brute force method

}