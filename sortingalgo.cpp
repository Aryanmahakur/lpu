#include <iostream>
using namespace std;
void linearsearch(int arr[], int target, int n)
{

    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            cout << arr[i] << endl;
        }
    }
}
int binarysearch(int arr[], int target, int n)
{
    int low = 0;
    int high = n - 1;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        if (target < arr[mid])
        {
            high = mid - 1;
        }
        if (target > arr[mid])
        {
            low = mid + 1;
        }
    }
    return -1;
};

void bubblesort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}
void insertion(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
}

void selectionsort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min_idx = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min_idx])
            {
                min_idx = j;
            }
        }
        swap(arr[i], arr[min_idx]);
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    linearsearch(arr, 2, n);
    return 0;
}