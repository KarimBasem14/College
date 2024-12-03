#include <iostream>

using namespace std;

int main(){
  long double n1,n2,n3;
  char op,equal;
  cin >> n1 >> op >> n2 >> equal >> n3;
  if ( (op == '+' && n1+n2==n3) || (op == '-' && n1-n2==n3) || (op == '*' && n1*n2==n3) ){
    cout << "Yes";
  }
  else {
    if ( op == '+') {
      cout << n1 + n2;
    }
    else if (op == '-') {
      cout << n1 - n2;
    }
    else if (op == '*') {
      cout << n1 * n2;
    }
  }

}