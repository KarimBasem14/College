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
        int count = 0;
        for (int j = 0; j < N; j++) {
            count++;
            for (int k = j+1; k < N; k++) {
                if (arr[k] >= arr[k-1]) {
                    count++;
                }
                else {
                    break;
                }
            }
        }
        cout << count << endl;
    }
}