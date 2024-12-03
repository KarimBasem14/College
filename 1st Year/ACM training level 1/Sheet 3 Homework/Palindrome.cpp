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

    for (int i = 0; i < N; i++){
        if (arr[i] == arr[N-i-1]){
          continue;
        }
        else{
          cout << "NO";
          return 0;
        }
    }
    cout << "YES";
}