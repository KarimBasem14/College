#include <iostream>

using namespace std;

int main() {
    long long N,M;
    cin >> N >> M;
    long long arr[N];

    long long freq_arr[M] = {0};
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
        if (arr[i] <= M) {
            freq_arr[arr[i] - 1]++;
        }
    }

    for (int i = 0; i < M; i++) {
        cout << freq_arr[i] << endl;
    }
}