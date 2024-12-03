#include <iostream>

using namespace std;

int main() {
    int n,k;
    cin >> n >> k;
    k--;

    int count = 0;
    int nums[n];
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    for (int i = 0; i < n; i++) {
        if (nums[i] >= nums[k] && nums[i] > 0) {
            count++;
        }
        else {
            break; // Since it is a decreasing sequence so if i < nums[k] then all indexes after i are also smaller than nums[k]
        }
    }
    cout << count;
}