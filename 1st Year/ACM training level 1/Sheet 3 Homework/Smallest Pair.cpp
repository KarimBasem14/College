#include <iostream>

using namespace std;

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
        long long smallest_num = arr[1] + arr[2] +  1 + 2;
        for (int j = 0; j < N -1; j++) {
            for (int k = j+1; k < N; k++) {
                long long x = arr[j] + arr[k] + k - j;
                if (x < smallest_num) {
                    smallest_num = x;
                }
            }
        }
        cout << smallest_num << endl;
    }
}