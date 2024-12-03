#include <iostream>
#include <cmath>
using namespace std;

int main(){
  long long input;
  cin >> input;

  int len = to_string(input).length();
  long long result = 0;
  int i = len - 1;
  int x = 0;
  while (i >= 0) {
    int last_digit = input/(long)(pow(10,x)) % 10;
    // cout << last_digit << endl;
    x++;
    result += last_digit * (pow(10,i));
    // cout << result << endl;
    i--;
  }
  // cout << result << endl;
  if (result == input) {
    cout << result << endl;
    cout << "YES";
  }
  else {
    cout << result << endl;
    cout << "NO";
  }

}