#include <iostream>

using namespace std;

int main(){
  int N;
  cin >> N;
  if (N <= 1) {
    cout << -1;
    return 1;
  }
  for (int i = 2; i <= N; i+=2){
    if (i != N) {
      cout << i << endl;
    }
    else {
      cout << i;
    }
  }
}