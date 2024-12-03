#include <iostream>

using namespace std;

int main() {
    long long N;
    cin >> N;
    // string input;
    // cin >> input;
    char input;
    int count[26] = {0};
    for (int i = 0; i < N; i++) {
        cin >> input;
        count[input - 'a']++;
    }
    for (int i = 0; i < 26; i++) {
        for (int j = 0; j < count[i]; j++) {
            cout << char(i + 'a');
        }
    }


}
