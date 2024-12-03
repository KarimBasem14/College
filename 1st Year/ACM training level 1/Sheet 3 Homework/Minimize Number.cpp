#include <iostream>

using namespace std;

int main() {
    int N;
    cin >> N;
    long long arr[N];

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }
    bool running = true;
    long long count = 0;
    while (running) {
        for (int i = 0; i < N; i++) {

            if (arr[i] % 2 !=0) {
                goto end;
            }
            // cout << i << endl;
            arr[i] = static_cast<float>(arr[i]) / static_cast<float>(2);
        }
        count++;

    }
    end:
        cout << count;
}