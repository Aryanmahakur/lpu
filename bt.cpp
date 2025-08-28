#include <iostream>
using namespace std;

int binarysearch(int* a, int size, int target)
{
    int low = 0;
    int high = size - 1;

    while (low <= high)
    {
        int mid = low + (high - low) / 2;

        if (a[mid] == target)
        {
            cout << "Found at index: " << mid << endl;
            return mid; 
        }
        else if (target < a[mid])
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }

    cout << -1 << endl;
    return -1;
}

int main()
{
    int arr[10];
    int n, target;
    cout << "Enter number of elements: ";
    cin >> n;

    cout << "Enter sorted elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter target element: ";
    cin >> target;

    binarysearch(arr, n, target);

    return 0;
}
