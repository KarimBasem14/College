#include <iostream>
#include <cmath>
using namespace std;

int main(){
    long long N;
    cin >> N;
    long long array[N];
    long long sum = 0;
    for (long long i = 0; i < N; i++){
        cin >> array[i];
        sum += array[i];
    }
    cout << abs(sum);
}