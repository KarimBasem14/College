// #include <iostream>
//
// using namespace std;
//
// int main(){
//   int N;
//   cin >>N;
//   for (int i = N; i>0; i--) {
//     for (int j = 0; j < i; j++) {
//       cout << "*";
//     }
//     if (i == 1) {
//       break;
//     }
//     else {
//       cout << endl;
//     }
//   }
// }

#include <iostream>

using namespace std;

int main(){
    int N;
    cin >>N;
    for (int i = 0; i<N; i++) {
        for (int j = 1; j <= i + 1; j++) {
            cout << "*";
        }
        if (i == N-1) {
            break;
        }
        else {
            cout << endl;
        }
    }
}