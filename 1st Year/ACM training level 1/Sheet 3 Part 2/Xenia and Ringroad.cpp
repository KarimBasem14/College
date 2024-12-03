#include <iostream>

using namespace std;

int main() {
    long long n, m;
    cin >> n >> m;
    long long num = 0;
    long long current_pos = 1;
    long long tasks[m];
    for (int i = 0; i < m; i++) {
        cin >> tasks[i];
    }
    for (int i = 0; i < m; i++) {
        if (tasks[i] > current_pos) {
            num += tasks[i] - current_pos;
            current_pos = tasks[i];
        }
        else if (tasks[i] == current_pos){
            continue;
        }
        else {
            num += n - current_pos + 1;
            current_pos = 1;
            num+= tasks[i] - current_pos;
            current_pos = tasks[i];
        }

    }
    cout << num;

}