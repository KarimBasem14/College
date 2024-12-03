#include <iostream>

using namespace std;

int main(){
  long long N;
  cin >> N;

  for (int i = 1; i <= 12; i++) {
    if (i != 12) {
      cout << N << " * " << i << " = " << i*N << endl;
    }
    else {
      cout << N << " * " << i << " = " << i*N;
    }
  }
}