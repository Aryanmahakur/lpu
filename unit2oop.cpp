#include <iostream>
#include <algorithm> 

using namespace std;

int findFirst(int arr[], int n, int target) {
    int left = 0, right = n - 1;
    int firstPos = -1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            firstPos = mid;
            right = mid - 1;  
        }
        else if (arr[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return firstPos;
}


int findLast(int arr[], int n, int target) {
    int left = 0, right = n - 1;
    int lastPos = -1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            lastPos = mid;
            left = mid + 1;  
        }
        else if (arr[mid] < target) {
            left = mid + 1;
        }
        else {
            right = mid - 1;
        }
    }
    return lastPos;
}


int countOccurrences(int arr[], int n, int target) {
    int first = findFirst(arr, n, target);
    if (first == -1) {
        return 0;  // target not present
    }
    int last = findLast(arr, n, target);
    return last - first + 1;
}

int main() {
    
    int arr[] = {1,2,2,2,3,4,5,5,5,6};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target;

    cout << "Enter target to count: ";
    cin >> target;

    int freq = countOccurrences(arr, n, target);
    cout << "Number of occurrences of " << target << " is: " << freq << endl;

    return 0;
}
