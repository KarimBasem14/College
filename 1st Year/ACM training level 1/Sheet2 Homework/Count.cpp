#include <iostream>

using namespace std;

int main(){
  int N;
  cin >> N;
  int num;
  int even = 0,odd = 0,positive = 0,negative = 0;
  int i = 0;
  while (cin >> num){
    // cin >> num;
    i++;

    // cout << "Num: " << num << " i: " << i << endl;
    if (num % 2 == 0){
      even++;
    }
    else{
      odd++;
    }
    if (num > 0){
      positive++;
    }
    if (num < 0){
      negative++;
    }
    if (i == N) {
      break;
    }

  }
  cout << "Even: " << even << endl;
  cout << "Odd: " << odd << endl;
  cout << "Positive: " << positive << endl;
  cout << "Negative: " << negative << endl;
}