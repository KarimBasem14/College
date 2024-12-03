#include <iostream>

using namespace std;

int main(){
  int N;
  cin >> N;
  int num;
  long long factorial = 1;
  int i = 0;
  while (cin >> num){
    factorial  = 1;
    if (num == 0 || num == 1) {
      factorial = 1;
    }
    else {
      for (int j = num; j >1 ; j--) {
        factorial*= j;
      }
    }
    i++;
    if (i != N) {
      cout << factorial << endl;
    }
    else {
      cout << factorial;
    }
    if (N == i){
      break;
    }
  }
}