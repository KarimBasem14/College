#include <cmath>
#include <iostream>

using namespace std;

long long num_divisors(long long num){
    long long count = 0;
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            count++;
        }
    }
    return count;
}

int main(){
    long long N;
    cin >> N;

    for (int i = 1; i <= N; i++) {
        if (num_divisors(i) == 2) {
            cout << i << " ";
        }
    }

}