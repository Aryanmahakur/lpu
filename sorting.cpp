#include<iostream>
using namespace std;


void selectionsort(int arr[], int n) {
  
    
  for (int i = 0; i < n-1; i++)
  {
    int min_idx=i;
    for (int j = i+1; j< n; j++)
    {
        if (arr[j]<arr[min_idx])
        {
            min_idx=j;
        }
        
        
    }
    swap(arr[i],arr[min_idx]);
    
  }
}

void merge(int arr1[], int arr2[], int n,int n2)
{
    int size= n+n2;
 
    int arr[size];
    int index = 0;
    int counter1 = 0;
    int counter2 = 0;
    while (counter1 < n && counter2 < n2)
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
    while (counter1 < n)
    {
        arr[index] = arr1[counter1];
        index++;
        counter1++;
    }
    while (counter2 < n2)
    {
        arr[index] = arr2[counter2];
        index++;
        counter2++;
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " - ";
    }
}

int main() {
    int arr[] = {1,3,5,7,9};
    int arr2[] = {2,4,6,8,10,12};
    int n = sizeof(arr) / sizeof(arr[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    merge(arr,arr2,n,n2);
   // selectionsort(arr, n);
   
    return 0;
}