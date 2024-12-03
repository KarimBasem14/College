#include <iostream>

using namespace std;

int main(){
    int num;
    int N;
    int max_num;
    int i = 0;
    cin >> N;
    while (cin >> num){
        if (i == 0) {
            max_num = num;
        }

        i++;
        if (num > max_num) {
            max_num = num;
        }
        if (N == i) {
            cout << max_num;
            break;
        }

    }


}