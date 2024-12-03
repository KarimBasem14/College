#include <iostream>

using namespace std;

int main(){
    int N;
    cin >> N;
    if (N == 0) {
        return 0;
    }

    std::string line (N*2-1, ' '); // It is noticed that the bottom line of the pyramid has 2 * N - 1 length


    int middle_index = (N*2-1) / 2;


    for (int i = 0; i < N; i++ ) {
        line[middle_index + i] = '*';
        line[middle_index - i] = '*';


        for (int j = 0; j <= middle_index + i; j++) { // Did this instead of printing line as they don't want spaces after the star.
            cout << line[j];
        }
        cout << endl;
    }

    for (int i = N; i > 0; i-- ) {
        line[middle_index + i] = ' ';
        line[middle_index - i] = ' ';


        for (int j = 0; j < middle_index + i; j++) { // Did this instead of printing line as they don't want spaces after the star.
            cout << line[j];
        }
        cout << endl;
    }


}