#include <iostream>

using namespace std;

int main(){
  long long n1,n2;
  char op;

  cin >> n1 >> op >> n2;
  if (op == '+'){
    cout << n1+n2;
  }
  else if(op == '-'){
    cout << n1-n2;
  }
  else if(op == '*'){
    cout << n1*n2;
  }
  else if (op == '/'){
    if (n2 != 0){
      cout << static_cast<int>(n1/n2) ;
    }
  }
}