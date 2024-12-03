#include <iostream>

using namespace std;

int main(){
  // to get the last digit from an int
  signed long long n1,n2;
  cin >> n1 >> n2;

  n1 = n1 % 10;
  n2 = n2 % 10;
  cout << n1 + n2;
}