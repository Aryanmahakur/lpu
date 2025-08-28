#include <iostream>
using namespace std;

void swap(int *arr, int n)
{
   
    for (int i = 0; i < 2; i++)
    {
        int temp = arr[i];
        arr[i] = arr[n - 2 + i];
        arr[n - 2 + i] = temp;
    }

    
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);

    swap(arr, n);

    return 0;
}
