#include <iostream>

using namespace std;

int main() {
    int A,B;
    cin >> A >> B;
    string code;
    cin >> code;

    if (code[A] != '-') {
        cout << "No";
        return 0;
    }
    for (int i = 0; i < code.length(); i++) {
        if (i == A) {
            continue;
        }
        if (isdigit(code[i]) == 0) {
            cout << "No";
            return 0;
        }
    }
    cout << "Yes";
}