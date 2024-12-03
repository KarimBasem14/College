#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;
    int matrix[N][N];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            cin >> matrix[i][j];
        }
    }

    // Sum first diagonal
    long long sum1 = 0;
    long long sum2 = 0;
    for (int i = 0; i < N; i++) {
        sum1 += matrix[i][i];
        sum2 += matrix[i][N-i-1];
    }
    cout << abs(sum1 - sum2);

}
