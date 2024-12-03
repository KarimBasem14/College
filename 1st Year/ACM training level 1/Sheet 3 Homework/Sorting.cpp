#include <iostream>

using namespace std;

void my_sort(int arr[], int len) {
    // Bubble sort
    for (int i = 1; i < len; i++) {
        for (int j = 0; j < len - 1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j+1];
                arr[j+1] = arr[j];
                arr[j] = temp;
            }
        }
    }
}

int main() {
    int N;
    cin >> N;
    int arr[N];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    my_sort(arr, N);
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }

}