#include <iostream>

using namespace std;

int main(){
    long long N;
    cin >> N;
    long long array[N];

    for (long long i = 0; i < N; i++){
        cin >> array[i];

    }
    long long x;
    cin >> x;
    for (long long i = 0; i < N; i++){
        if (array[i] == x){
            cout << i;
            return 0;
        }
    }
    cout << -1;
}