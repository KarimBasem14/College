#include <iostream>

using namespace std;

long long max_num(long long arr[], int start_index, int end_index) {
    long long max_number = arr[start_index];
    for (int i = start_index; i <= end_index; i++) {
        if ( arr[i]> max_number) {
            max_number = arr[i];
        }
    }
    return max_number;
}

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        int N;
        cin >> N;
        long long arr[N];
        for (int j = 0; j < N; j++) {
            cin >> arr[j];
        }
        // cout << "Test case "<< i << endl;
        for (int j = 0; j < N; j++) {
            for (int k = j; k < N; k++) {
                // cout << "start at " << j << "end at " << k << " max number is " << max_num(arr, j, k) << endl;
                cout << max_num(arr, j, k) << " ";
            }
        }
        cout << endl;
    }
}// 3 1 2