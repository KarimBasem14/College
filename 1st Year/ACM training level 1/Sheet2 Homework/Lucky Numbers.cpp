#include <iostream>

using namespace std;

int is_lucky(long long n){
    // 0 --> not lucky
    // 1 --> lucky
    if (n == 0) {
        return 0;
    }
    int last_num;
    while (n != 0) {
        last_num = n % 10;
        n = n / 10;
        if (last_num != 4 && last_num != 7) {
            return 0;
        }
    }
    return 1;
}

int main(){
    long long A;
    long long B;
    cin >> A >> B;

    int lucky_count = 0; // Counts the number of lucky numbers in that range
    for (int i = A; i <= B; i++) {
        if (is_lucky(i)) {
            lucky_count++;
            cout << i << " ";
        }
    }
    if (lucky_count == 0) {
        cout << -1;
    }
}