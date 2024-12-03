#include <iostream>

using namespace std;

// Here you can get an array of all the neighbors of a given point in a matrix

int is_in_square(int rows, int columns, int x1, int y1, int x2, int y2) {
    if (x1 == x2 && y1 == y2) {
        return 0;
    }
    if (x2 < 0 || x2 > rows - 1 || y2 < 0 || y2 > columns - 1) {
        return 0;
    }
    if (x2 == x1) {
        if (y2 == y1 +1 || y2 == y1 - 1) {
            return 1;
        }
    }
    else if (y2 == y1) {
        if (x2 == x1 + 1 || x2 == x1 - 1) {
            return 1;
        }
    }
    else if ((x2 == x1 + 1 && y2 == y1 + 1) || (x2 == x1 + 1 && y2 == y1 - 1) || (x2 == x1 -1 && y2 == y1 + 1) || (x2 == x1 - 1 && y2 == y1 - 1)) {
        return 1;
    }
    return 0;
}




int main() {
    int N, M;
    cin >> N >> M;
    char matrix[N][M];
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            cin >> matrix[i][j];
        }
    }

    int x, y;
    cin >> x >> y;
    x--;
    y--;
    // cout << "Given index is " << x << " " << y << endl;
    char neighbors[8];
    int index = 0;
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (is_in_square(N,M,x,y, i, j)) {
                // cout << "The index " << i << " " << j << " is in the given square" << endl;
                neighbors[index] = matrix[i][j];
                index++;
            }
        }
    }
    for (int i = 0; i < index; i++) {
        if (neighbors[i] != 'x') {
            cout << "no";
            return 0;
        }
    }
    cout << "yes";
    return 0;
}