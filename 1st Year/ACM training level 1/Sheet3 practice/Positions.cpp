#include <iostream>

using namespace std;

int main(){
    long long N;
    cin >> N;
    long long array[N];

    for (long long i = 0; i < N; i++){
        cin >> array[i];
        if (array[i] <= 10) {
            cout << "A[" << i << "] = " << array[i] << endl;
        }

    }


}