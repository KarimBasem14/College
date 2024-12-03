#include <iostream>

using namespace std;

int main() {
    unsigned long long N, Q;
    cin >> N >> Q;
    unsigned long long arr[N+1]; // N+1 as the array is gonna be shifted, the first element is at index 1
    unsigned long long sums[N+1] = {0}; // sum(i) = 1+.....+i
    sums[0] = 0;
    for (int i = 1; i <= N; i++) {
        cin >> arr[i];
        sums[i] = sums[i-1] + arr[i];

        // cout << sums[i] << " ";
    }
    // cout  << endl;

    for (int i = 0; i < Q; i++) {
        unsigned long long L, R;
        cin >> L >> R;
        cout << sums[R] - sums[L-1] << endl;
    }


}




// Previous solution but was too slow
// for (int i = 0; i < N; i++) {
//     cin >> arr[i];
// }
// for (int i = 0; i < Q; i++) {
//     unsigned long long L, R;
//     cin >> L >> R;
//     unsigned long long sum = 0;
//     for (int j = L-1; j < R; j++) {
//         sum += arr[j];
//     }
//     cout << sum << endl;
// }