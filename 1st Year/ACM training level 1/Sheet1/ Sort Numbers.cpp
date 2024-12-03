#include <iostream>

using namespace std;

int main(){
  double n1,n2,n3;
  cin >> n1 >> n2 >> n3;
  if (n1 <= n2 && n1 <= n3){
    cout << n1 << endl;
    if (n2 <= n3){
      cout << n2 << endl;
      cout << n3 << endl;
    }
    else {
      cout << n3 << endl;
      cout << n2 << endl;
    }
  }
  else if (n2 <= n1 && n2 <= n3){
    cout << n2 << endl;
    if (n1 <= n3){
      cout << n1 << endl;
      cout << n3 << endl;
    }
    else {
      cout << n3 << endl;
      cout << n1 << endl;
    }
  }
  else if (n3 <= n2 && n3 <= n3){
    cout << n3 << endl;
    if (n2 <= n1){
      cout << n2 << endl;
      cout << n1 << endl;
    }
    else {
      cout << n1 << endl;
      cout << n2 << endl;
    }
  }
  cout << endl << n1 << endl << n2 << endl << n3;
}