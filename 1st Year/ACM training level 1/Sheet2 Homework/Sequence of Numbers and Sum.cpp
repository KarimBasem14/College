#include <iostream>

using namespace std;

int main(){
    int N;
    int M;
    while (cin >> N >> M) {

        if (N <= 0 || M <= 0) {
            return 0; // When the problem says terminate it means return 0, you CAN'T return 1.
        }

        int sum = 0;

        if (N < M) {
            sum = ( (float) (M - N + 1) / 2 ) * (M + N);

            for (int i = N; i <= M; i++) {

                cout << i << " ";
            }
        }
        else {
            sum = ( (float) (N - M + 1) / 2 ) * (M + N);

            for (int i = M; i <= N; i++) {

                cout << i << " ";
            }
        }

        cout << "sum =" << sum << endl;
    }
}