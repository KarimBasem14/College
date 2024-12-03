#include <iostream>

using namespace std;


// Fibonacci without using recursion or functions since the course didn't cover it at that point
int main(){
  long long N;
  cin >> N;

  if (N == 1) {
    cout << 0;
    return 0;
  }

  int f1 = 0;
  int f2 = 1;
  cout << f1;
  cout << " " << f2;
  for (int i = 2; i < N; i++) {
    const int sum = f1 + f2;
    cout <<  " " << sum;
    f1 = f2;
    f2 = sum;
  }
}