#include <iostream>

using namespace std;

int main(){
    long long a,b,c,d;
    cin >> a >> b >> c >> d;
    if ( a > b || c > d ){
      cout << "Yay";
    }
    else if ( a < b || c < d ){
      cout << "not Bad";
    }
    else {
      cout << "BAD";
    }
}