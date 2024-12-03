#include <iostream>

using namespace std;

int count(long long num, long long arr[], int len) {

    int count = 0;
    for (int i = 0; i < len; i++) {
        if (arr[i] == num) {
            count++;
        }
    }
    return count;
}

int main() {
    int N;
    cin >> N;
    long long arrA[N];
    long long arrB[N];
    for (int i = 0; i < N; i++) {
        cin >> arrA[i];
    }
    for (int i = 0; i < N; i++) {
        cin >> arrB[i];
    }

    int x = 0;
    for (int i = 0; i < N; i++) {
        if (count(arrA[i], arrA, N) == count(arrA[i] , arrB, N)) {
            x++;
        }
    }
    if (x == N) {
        cout << "yes";
    }
    else {
        cout << "no";
    }
}
