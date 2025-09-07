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

int linearsearchR(int arr[], int target, int n,int index)
{
    if(index==n){
        return -1;
    }
  if(arr[index]==target){
  return index;
  }

  return linearsearchR(arr,target,n,index+1);

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
// A recursive binary search function. It returns the location of 'x' if present
// within arr[low..high], otherwise returns -1
int binarySearch(int arr[], int low, int high, int x) {
    if (low<=high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == x)
            return mid;
        else if (arr[mid] > x)
            return binarySearch(arr, low, mid - 1, x);
        else
            return binarySearch(arr, mid + 1, high, x);
    }
    // Base case: search space exhausted
    return -1;
}



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

void bubblesort(int arr[], int n)
{
     if (n == 1){

         return;
     }

    for (int j = 0; j < n -1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    bubblesort(arr,n-1);
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
void insert(int arr[], int n) {
    if (n <= 1)
        return;

    // Recursively sort the first n-1 elements
    insert(arr, n - 1);

    // Insert the nth element into the sorted portion
    int key = arr[n - 1];
    int j = n - 2;

    // Shift elements of arr[0..n-2], that are greater than key, to one position ahead
    while (j >= 0 && arr[j] > key) {
        arr[j + 1] = arr[j];
        j--;
    }

    arr[j + 1] = key;
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
void selectionSortRecursive(int arr[], int n, int i = 0) {
    // Base case: if the entire array is sorted
    if (i == n - 1)
        return;

    // Find the index of the minimum element in the unsorted part
    int min_idx = i;
    for (int j = i + 1; j < n; j++) {
        if (arr[j] < arr[min_idx]) {
            min_idx = j;
        }
    }

    // Swap the found minimum element with the first element
    swap(arr[i], arr[min_idx]);

    // Recursively call the function for the remaining unsorted part
    selectionSortRecursive(arr, n, i + 1);
}


int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    linearsearch(arr, 2, n);
    return 0;
}