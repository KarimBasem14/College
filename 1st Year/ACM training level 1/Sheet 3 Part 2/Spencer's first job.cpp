#include <iostream>
// Personally don't like my solution (especially the count variable)and would like to review other ones
using namespace std;

int main() {
    int N;
    cin >> N;
    int ages[N];
    int age_wanted;
    int min_age = 10;
    int max_age = 10;
    for (int i = 0; i < N; i++) {
        cin >> ages[i];
        if (i == 0) {
            min_age = ages[i];
            max_age = ages[i];
        }
        if (ages[i] > max_age) {
            max_age = ages[i];
        }
        if (ages[i] < min_age) {
            min_age = ages[i];
        }
    }
    cin >> age_wanted;
    int count = 0;


    for (int i = 0; i < N; i++) {
        if (ages[i] == age_wanted) {
            count++;
        }
    }
    if (count == 0) {
        cout << "No students are " << age_wanted << " years old.";
    }
    else if (count == 1) {
        for (int i = 0; i < N; i++) {
            if (ages[i] == age_wanted) {
                cout << "Student " << i+1 <<  " is " << age_wanted << " years old.";
            }
        }
    }
    else {
        cout << "Students ";
        int x=0;
        for (int i = 0; i < N; i++) {
            if (ages[i] == age_wanted) {
                x++;
                if (x == count) {
                    cout << i+1 << " ";
                }
                else {
                    cout<<  i+1 << ", ";
                }
            }
        }
        cout << "are " << age_wanted << " years old.";
    }
    cout << endl;
    cout << "Range: " << min_age << " to " << max_age;


}