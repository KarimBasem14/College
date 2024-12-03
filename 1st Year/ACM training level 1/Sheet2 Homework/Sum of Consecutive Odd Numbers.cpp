#include <iostream>

using namespace std;

long long sum_odd_inrange(long long n1, long long n2) {
  long long sum = 0;
  for (int i = n1+1; i < n2; i++) {
    if (i % 2 !=0) {
      sum+= i;
    }
  }
  return sum;
}

int main(){
  long long T;
  cin >> T;

  long long n1,n2;

  for (int i = 0; i < T; i++) {
    cin >> n1 >> n2;
    if (n1 < n2) {
      cout << sum_odd_inrange(n1, n2) << endl;
    }
    else {
      cout << sum_odd_inrange(n2, n1) << endl;
    }
  }
}