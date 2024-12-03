#include <iostream>
#include <cmath>

using namespace std;

int main() {
  long long a,b,c,d;

  cin >> a >> b >> c >> d;
  long long difference = ( (a * b) - (c * d) );
  cout << "Difference = " << difference;
}