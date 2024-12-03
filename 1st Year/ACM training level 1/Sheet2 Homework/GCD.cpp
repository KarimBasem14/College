#include <iostream>

using namespace std;

long long find_gcd(long long n1, long long n2) {
    // When using this function please put n1 as the smaller number.
    long long gcd = 0;
    if (n1 < n2) {
        for (int i = 1; i <= n1; i++) {
            if ( n1 % i == 0 && n2 % i == 0) {
                if (i > gcd) {
                    gcd = i;
                }
            }
        }
    }
    // In the else I only made i <= n1 into i <= n2
    else {
        for (int i = 1; i <= n2; i++) {
            if ( n1 % i == 0 && n2 % i == 0) {
                if (i > gcd) {
                    gcd = i;
                }
            }
        }
    }
    return gcd;
}

int main(){
    long long A,B;
    cin >> A >> B;

    cout << find_gcd(A,B);
}