#include <iostream>


using namespace std;

int main() {
    int N;
    cin >> N;
    long long num;
    int i = 0;
    int x = 1;
    while (cin >> num) {
        int len = to_string(num).length();
        for (int j = 1; j <= len; j++) {
            cout << (num % (10 ) )  << " ";
            num /= 10;
        }
        cout << endl;
        i++;
        if (i == N) {
            break;
        }
    }
}