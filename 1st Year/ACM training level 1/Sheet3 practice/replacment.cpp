#include <iostream>

using namespace std;

int main(){
    long long N;
    cin >> N;
    long long array[N];

    for (long long i = 0; i < N; i++){
        cin >> array[i];
        if (array[i] > 0){
          array[i] = 1;
        }
        else if ( array[i] < 0) {
            array[i] = 2;
        }

    }

    // Printing the array
    for (long long i = 0; i < N; i++) {
        cout << array[i] << " ";
    }
}