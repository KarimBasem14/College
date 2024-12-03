#include <iostream>
#include <cmath>

using namespace std;

int main(){
    long double a,b,c,d;
    cin >> a >> b >> c >> d;
    // if a^b > c^d then a log(b) > c log(d)
    if ( a > 0 && c > 0 && (b * log(a) > d * log(c)) ) {
        cout << "YES";
    }
    else if ( pow(a,b) > pow(c,d) ) {
        cout << "YES";
    }
    else{
      cout << "NO";
    }
}