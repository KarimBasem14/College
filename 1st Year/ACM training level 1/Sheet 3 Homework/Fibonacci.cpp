#include <iostream>

using namespace std;

long long fibonacci(int n) { // The recursive approach leads to a time constraint error
    long long current;
    if (n == 1) {
        return 0;
    }
    else if (n == 2) {
        return 1;
    }
    else {
        long long prev1 = 1;
        long long prev2 = 0;

        for (int i = 2; i < n; i++) {
            current = prev1 + prev2;
            prev2 = prev1;
            prev1 = current;
        }
    }
    return current;
}

int main() {
    int N;
    cin >> N;

    cout << fibonacci(N);

}