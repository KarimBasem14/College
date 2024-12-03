#include <iostream>

using namespace std;

long long factorial(long long n)
{
  if (n ==1 || n == 0) {
    return 1;
  }
  long long res = 1;
  for (int i = 2; i <= n; i++)
    res *= i;
  return res;
}

long long comb(const long long n, const long long r) {
  return ( factorial(n) / ( factorial(r) * factorial(n-r) ) );
}

int main(){
  long long k,s;
  cin >> k >> s;

  long long count = 0;

  // Solution 1

  // Z = S - X - Y
  for (int i = 0; i <= k; i++) { // X
    for (int j = 0; j <= k; j++) { // Y
      long long z = s - i - j;
      if (z >= 0 && z <= k) {
        count++;
      }
    }
  }
  cout << count;


  // Solution 2

}