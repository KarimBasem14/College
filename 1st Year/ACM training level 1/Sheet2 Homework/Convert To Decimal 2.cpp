#include <algorithm>
#include <iostream>

using namespace std;

// This approach has the advantage of not requiring to convert the number to binary and then count its ones.
int count_1(long long num) {
    int count = 0;


    for (int i = 0; i < 32; i++) {
        // Retrieve last bit
        int last_bit = num & 1;
        num = num >> 1;
        if (last_bit == 1) {
            count++;
        }
    }
    return count;
}

int main(){


  int T;
  cin >> T;

  for (int i = 0; i < T; i++) {
    long long N;
      cin >> N;
    int count = count_1(N);
      long long answer = 1;
      int x = 2;
    for (int j = 0; j < count - 1; j++) {
        answer += x;
        x *= 2;
    }
    cout << answer << endl;
  }
}