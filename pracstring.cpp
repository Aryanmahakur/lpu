#include<iostream>
using namespace std;

int main() {
    int arr[5] = {1, 1, 0, 0, 0};
    int n = sizeof(arr)/sizeof(arr[0]);

    int maxCount = 1;
    int count = 1;

    for (int i = 1; i < n; i++) {
        if (arr[i] == arr[i-1]) {
            count++;  // streak continues
        } else {
            count = 1;  // reset streak
        }
        if (count > maxCount) {
            maxCount = count;
        }
    }

    cout << maxCount << endl;
    return 0;
}
