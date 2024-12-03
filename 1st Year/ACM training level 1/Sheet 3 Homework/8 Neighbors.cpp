#include <iostream>

using namespace std;

// Please Note that the solution is in the #2 file for this problem

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
    // if ((matrix[x+1][y] == 'x' || x+1>N) && (matrix[x-1][y] == 'x' || x-1 < 0) && (matrix[x][y+1] == 'x' || y+1>M) && matrix[x][y-1] == 'x' && (matrix[x+1][y+1] == 'x' || x+1>N || y+1 > M) && (matrix[x-1][y-1] == 'x' || x-1 < 0 || y-1 < 0) && (matrix[x+1][y-1] == 'x' || x+1>N || y-1 <0 ) && (matrix[x-1][y+1] == 'x' || x-1<0 || y+1>M)) {
    //     cout << "yes";
    // }
    // else {
    //     cout << "no";
    // }
    int z = 0;
    if (x-1 < N) {
        z++;
    }
    else {
        if (matrix[x-1][y] == 'x') {
            z++;
        }
    }
    if (y-1 < M) {
        z++;
    }
    else {
        if (matrix[x][y-1] == 'x') {
            z++;
        }
    }
    if (x+1 > N) {
        z++;
    }
    else {
        if (matrix[x+1][y] == 'x') {
            z++;
        }
    }
    if (y+1 > M) {
        z++;
    }
    else {
        if (matrix[x][y+1] == 'x') {
            z++;
        }
    }
    if (x+1 > N && y+1 > M) {
        z++;
    }
    else if (matrix[x+1][y+1] == 'x') {
        z++;
    }
    if (x-1 <N && y-1 < M) {
        z++;
    }
    else if (matrix[x-1][y-1] == 'x') {
        z++;
    }
    if (x-1 <N || y+1 > M) {
        z++;
    }
    else if (matrix[x-1][y+1] == 'x') {
        z++;
    }
    if (x+1 >N || y-1 < M) {
        z++;
    }
    else if (matrix[x+1][y-1] == 'x') {
        z++;
    }

    if (z == 8) {
        cout << "yes";
    }
    else {
        cout << "no";
    }


}