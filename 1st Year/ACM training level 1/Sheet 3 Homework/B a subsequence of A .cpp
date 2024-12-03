#include <iostream>

using namespace std;

int subsequence(long long arr1[], int len1, long long arr2[], int len2) {
    int j = 0;
    for (int i = 0; i < len1; i++) {
        if (arr1[i] == arr2[j]) {
            j++;
        }
    }
    if (j == len2) {
        return 1; // 1 means that it is a subsequence
    }
    return 0;
}

int main() {
    int N, M;
    cin >> N >> M;
    long long arrA[N];
    long long arrB[M];
    for (int i = 0; i < N; i++) {
        cin >> arrA[i];
    }
    for (int i = 0; i < M; i++) {
        cin >> arrB[i];
    }
    if (subsequence(arrA, N, arrB, M)) {
        cout << "YES";
    }
    else {
        cout << "NO";
    }
}