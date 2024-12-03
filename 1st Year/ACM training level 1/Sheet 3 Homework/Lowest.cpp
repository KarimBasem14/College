#include <iostream>

using namespace std;

int main(){
  int N;
  cin >> N;

  int arr[N];
  // Reading the array
  int lowest;
  int index;
  for (int i = 0; i < N; i++) {
    cin >> arr[i];
    if (i == 0) {
      lowest = arr[0];
      index = 0;
    }
    if (arr[i] < lowest) {
      lowest = arr[i];
      index = i;
    }
  }
  cout << lowest << " " << index+1;
}