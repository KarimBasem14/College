#include <iostream>

using namespace std;

int main() {
    int T;
    cin >> T;
    for (int k = 0; k < T; k++) {
        long long N;
        cin >> N;
        long long even = 0;
        long long odd = 0;
        long long arr[N];
        for (int i = 0; i < N; i++) {
            cin >> arr[i];
            if (arr[i] % 2 == 0) {
                even++;
            }
            else {
                odd++;
            }
        }
        // cout << "Even = " << even << " Odd = " << odd << endl;
        if (even == N) {
            cout << "Even" << endl;
        }
        else if (odd == N) {
            cout << "Odd" << endl;
        }
        else {
            cout << "Mix" << endl;
        }
    }
}