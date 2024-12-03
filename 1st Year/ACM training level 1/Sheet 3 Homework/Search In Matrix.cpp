#include <iostream>

using namespace std;

int main() {
    int rows, columns;
    cin >> rows >> columns;
    long long matrix[rows][columns];
    long long count = 0;

    for (int i = 0 ; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            cin >> matrix[i][j];
        }
    }

    long long target;
    cin >> target;
    // cout << "Matrix has " << rows << " rows and " << columns << " columns and target is " << target << endl;

    for (int i = 0 ; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            if (matrix[i][j] == target) {
                count++;
            }
        }
    }
    // cout << "Count target is " << count << endl;

    if (count) {
        cout << "will not take number";
    }
    else {
        cout << "will take number";
    }
}