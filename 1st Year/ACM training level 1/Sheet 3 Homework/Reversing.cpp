#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;

    long long arr[N];
    // Reading the array

    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    for (int i = N-1; i >=0; i--){
      cout << arr[i] << " ";
    }
}