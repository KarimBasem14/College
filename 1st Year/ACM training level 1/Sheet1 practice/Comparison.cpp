#include <iostream>

using namespace std;

int main(){
  int a,b;
  char op;
  cin >> a >> op >> b;
  if ( (op == '>' && a > b) || (op == '<' && a < b) || (op == '=' && a == b))  {
    cout << "Right";
  }
  else {
    cout << "Wrong";
  }
}