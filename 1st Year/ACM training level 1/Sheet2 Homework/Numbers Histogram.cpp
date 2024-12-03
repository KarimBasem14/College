#include <iostream>

using namespace std;

int main(){
    char S;
    cin >> S;

    long long N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        long long num;
        cin >> num;
        for (int i = 0; i < num; i++) {
            cout << S;
        }
        cout << endl;
    }

}