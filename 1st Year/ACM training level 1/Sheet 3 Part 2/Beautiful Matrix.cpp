#include <iostream>

using namespace std;

int main() {
    int matrix[5][5];
    int index_i;
    int index_j;
    int num_of_operations = 0;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> matrix[i][j];
            if (matrix[i][j] == 1) {
                index_i = i;
                index_j = j;
            }
        }
    }
    index_i++;
    index_j++;
    num_of_operations = abs(3-index_i) + abs(3-index_j);
    // cout << "i = " << index_i << " j = " << index_j << endl;
    // cout << abs(3-index_i) << " " << abs(3-index_j) << endl;
    cout << num_of_operations;
}