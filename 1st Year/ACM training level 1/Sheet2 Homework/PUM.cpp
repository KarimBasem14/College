#include <iostream>

using namespace std;

int main(){
  long long N;
  cin >> N;

  long long count = 0;
  for (int i = 0; i < N; i++) {
    if (i == N-1) {
      cout << count + 1 << " " << count + 2 << " " << count + 3 << " PUM";
      count+= 4;
    }
    else {
      cout << count + 1 << " " << count + 2 << " " << count + 3 << " PUM" << endl;
      count+= 4;
    }
  }
}