#include <iostream>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;
    long long matrix[N][M];

    for (int i = 0; i < N; i++) {
        for (int j = M-1; j >= 0; j--) {
            cin >> matrix[i][j];
        }
    }
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cout  << matrix[i][j] << " ";
        }
        cout << endl;
    }

}