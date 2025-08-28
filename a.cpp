#include <iostream>
using namespace std;
void reversearray(int *arr, int pos, int start, int start1, int n)
{
    while (start1 < n)
    {
        int temp = arr[start1];

        for (int j = start1; j > start; j--)
        {
            arr[j] = arr[j - 1];
        }

        arr[start] = temp;

        start++;
        start1++;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
void reversearraywithrotaation(int *arr, int pos, int start, int start1, int n)
{
    while (start1 < n)
    {
        int temp = arr[start];

        arr[start]=arr[start1];
        arr[start1]=temp;
      
        

        start++;
        start1++;
    }

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[10];
    int length;
    cout << "enter length" << endl;
    cin >> length;
    cout << "enter position" << endl;
    int pos;
    cin >> pos;
    int start = 0;
    int start1 = pos + 1;
    for (int i = 0; i < length; i++)
    {
        cout << "enter num for " << i << endl;
        cin >> arr[i];
    }
    int n = sizeof(arr) / sizeof(arr[0]);

    reversearray(arr, pos, start, start1, length);
    reversearraywithrotaation(arr,pos,start,start1,length);
    return 0;
}
