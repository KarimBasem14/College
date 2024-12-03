#include <iostream>

using namespace std;

long long sum_of_digits(long long n) {
  if (n == 0) {
    return 0;
  }
  long long sum = 0;
  while (n != 0) {
    sum += n % 10;
    n /= 10;
  }
  return sum;
}

int main(){
  long long N,A,B;
  cin >> N >> A >> B;

  long long sum = 0;
  for (int i = 0; i <= N; i++) {
    long long sum_digits = sum_of_digits(i);
    if (sum_digits >= A && sum_digits <= B) {
      sum += i;
    }
  }
  cout << sum;
}