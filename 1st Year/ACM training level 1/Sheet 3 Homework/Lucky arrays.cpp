#include <iostream>

using namespace std;

long long min_value(long long arr[], int len) {
    long long min_value = arr[0];
    for (int i = 0; i < len; i++) {
        if (arr[i] < min_value) {
            min_value = arr[i];
        }
    }
    return min_value;
}

long long frequency(long long arr[], int len, long long num) {
    // Gets the frequency of num in arr
    long long count = 0;
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

    long long arr[N];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    if (frequency(arr, N, min_value(arr, N) ) % 2 != 0 ) {
        cout << "Lucky";
    }
    else {
        cout << "Unlucky";
    }

}