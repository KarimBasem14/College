#include <iostream>

using namespace std;

int min_value(long long arr[], int len) {
    long long min_value = arr[0];
    int index = 0;
    for (int i = 0; i < len; i++) {
        if (arr[i] < min_value) {
            min_value = arr[i];
            index = i;
        }
    }
    return index;
}

int max_value(long long arr[], int len) {
    long long max_value = arr[0];
    int index = 0;
    for (int i = 0; i < len; i++) {
        if (arr[i] > max_value) {
            max_value = arr[i];
            index = i;
        }
    }
    return index;
}

void swap(long long arr[],int index1, int index2) {
    long long temp = arr[index1];
    arr[index1] = arr[index2];
    arr[index2] = temp;
}

int main() {
    int N;
    cin >> N;
    long long arr[N];
    for (int i = 0; i < N; i++) {
        cin >> arr[i];
    }

    swap(arr, min_value(arr, N), max_value(arr, N));
    for (int i = 0; i < N; i++) {
        cout << arr[i] << " ";
    }
}