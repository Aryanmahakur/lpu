#include <iostream>
using namespace std;

void printevenindices(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            cout << arr[i] << endl;
        }
    }
}
void insertatpos(int arr[], int x, int pos, int n)
{

}


void insertSorted(int arr[], int &n, int x, int capacity) {  // n by reference
    if (n >= capacity) {
        cout << "Array Overflow" << endl;
        return;
    }

    int i;
    for (i = n - 1; i >= 0; i--) {
        if (arr[i] > x) {
            arr[i + 1] = arr[i];  // shift element
        } else {
            arr[i + 1] = x;       // insert x
            n++;                   // update size
            break;
        }
    }

    if (i == -1) {  // x is smallest
        arr[0] = x;
        n++;
    }

    // Print array
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void deletetarget(int arr[],int target,int n){
    for (int i = n-1;i>=0; i++)
    {
        if(arr[i]==target){
           arr[i]=arr[i+1];
           n--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }
    
    
}

int main() {
    int arr[10] = {1, 2, 5, 3, 5};
    int n =5;  // number of filled elements
    int capacity = 10;
     deletetarget(arr,5,n);
    //insertSorted(arr, n, 4, capacity);
}
