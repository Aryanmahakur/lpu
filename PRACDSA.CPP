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

void insertSorted(int arr[], int &n, int x, int capacity)
{ // n by reference
    if (n >= capacity)
    {
        cout << "Array Overflow" << endl;
        return;
    }

    int i;
    for (i = n - 1; i >= 0; i--)
    {
        if (arr[i] > x)
        {
            arr[i + 1] = arr[i]; // shift element
        }
        else
        {
            arr[i + 1] = x; // insert x
            n++;            // update size
            break;
        }
    }

    if (i == -1)
    { // x is smallest
        arr[0] = x;
        n++;
    }

    // Print array
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void deletetarget(int arr[], int target, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            for (int j = i; j < n - 1; j++)
            {
                arr[j] = arr[j + 1];
                /* code */
            }
            n--;
            i--;
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i];
    }
}
int returnindex(int *arr, int target, int n)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}
void merge(int *arr1, int *arr2,int n)
{
    int size=2*n;
    int arr[size];
    int index = 0;
    int counter1 = 0;
    int counter2 = 0;
    while (counter1 < n && counter2 < n)
    {
        if (arr1[counter1] < arr2[counter2])
        {
            arr[index] = arr1[counter1];
            counter1++;
            index++;
        }
        else
        {
            arr[index] = arr2[counter2];
            counter2++;
            index++;
        }
    }
        while (counter1<n)
        {
            arr[index]=arr1[counter1];
            index++;
            counter1++;
        }
        while (counter2<n)
        {
            arr[index]=arr2[counter2];
            index++;
            counter2++;
        }
        
    

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " - ";
    }

}
void secmax(int arr[],int n){
 
 int max=INT_MIN;
 int secmax=INT_MIN;
 for (int i = 0; i < n; i++)
 {
    if(arr[i]>max){
        secmax=max;
       max=arr[i];
    }else if(arr[i]>secmax&&arr[i]<max){
        secmax=arr[i];
    }
 }
 
 if(secmax==INT_MIN){
    cout<<("no secmax");
 }else{
    cout<<(secmax);
 }
}
void thirdmax(int arr[],int n){
 int max=INT_MIN;
 int secmax=INT_MIN;
 int thirdmax=INT_MIN;
 for (int i = 0; i < n; i++)
 {
    if(arr[i]>max){
        thirdmax=secmax;
        secmax=max;
       max=arr[i];
    }else if(arr[i]>secmax&&arr[i]<max){
        thirdmax=secmax;
        secmax=arr[i];
    }else if(arr[i]<secmax&&arr[i]>thirdmax&&arr[i]<max){
       thirdmax=arr[i];
    }
 }
 
 if(thirdmax==INT_MIN){
    cout<<("no thirdmax");
 }else{
    cout<<(thirdmax);
 }
}
void reversearr(int arr[],int n,int k){
    for (int i = 0; i < n; i +=k)
    {
        int left=i;
        int right= min(i+k-1,n-1) ;
        while (left<right)
        {
            swap(arr[left],arr[right]);
            left++;
            right--;
        }
        
    }
    for (int i = 0; i < n; i++)
    {
        cout<<arr[i]<<endl;
    }
    
    
}
#include <bits/stdc++.h>
using namespace std;

int maxProductTriplet(vector<int>& arr) {
    int n = arr.size();
    if (n < 3) {
        cout << "Array must have at least 3 elements.\n";
        return -1;
    }

    // Sort the array
    sort(arr.begin(), arr.end());

   int max1=arr[n-1]*arr[n-2]*arr[n-3];
   int max2=arr[0]*arr[1]*arr[n-1];

    return max(max1,max2);
}



int main()
{
     vector<int>arr = {-10, -3, 5, 6, -20};

   // int capacity = 10;
   // merge(arr1, arr2,4);
    // deletetarget(arr,3,n);
    // insertSorted(arr, n, 4, capacity);
    //thirdmax(arr,n);
    cout<<maxProductTriplet(arr);
}
