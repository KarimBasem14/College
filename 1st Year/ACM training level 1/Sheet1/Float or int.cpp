#include <iostream>


using namespace std;

int main(){
  double n;
  cin >> n;

  if ( n == int(n) ) {
    cout << "int " << n; ;
  }
  else {
    cout << "float " << int(n) << " " << n - int(n);
  }


}