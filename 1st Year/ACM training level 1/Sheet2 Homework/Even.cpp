#include <iostream>

using namespace std;

int main(){
  long long N;
  cin >> N;

  int count_even = 0;
  for (int i = 1; i <= N; i++) {
    if (i % 2 == 0) {
      count_even++;
      cout << i << endl;
    }
  }
  if (count_even == 0) {
    cout << -1;
  }
}