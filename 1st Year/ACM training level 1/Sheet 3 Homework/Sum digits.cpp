#include <iostream>

using namespace std;

int main() {
    long long N;
    cin >> N;

    string input;
    cin >> input;
    // cout << "Input is " << input << endl;
    long long sum = 0;

    for (char x : input) {

        sum += int(x) - 48;
    }

    cout << sum;
}