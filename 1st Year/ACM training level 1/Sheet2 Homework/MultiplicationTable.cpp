#include <iostream>

using namespace std;

int main(){
  int N;
  cin >> N;
  for (int i = 1; i <= 12; i++){
    if (i == 12) {
      cout << N << " * " << i << " = " << N*i;
    }
    else {
      cout << N << " * " << i << " = " << N*i << endl;
    }
  }
}