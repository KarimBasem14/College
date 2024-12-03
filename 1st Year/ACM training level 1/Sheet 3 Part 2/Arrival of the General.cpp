#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int min_index = 0;
    int max_index = 0;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] < arr[min_index]) {
            min_index = i;
        }
        if (arr[i] > arr[max_index]) {
            max_index = i;
        }
    }
    cout <<  n-1-min_index+max_index;
}