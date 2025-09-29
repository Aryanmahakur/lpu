#include <iostream>
using namespace std;
void insertion(int arr[], int val, int n)
{
    for (int i = n; i > 0; i--)
    {
        arr[i] = arr[i - 1];
    }
    arr[0] = val;
    for (int i = 0; i <=n; i++)
    {
        cout << arr[i] << " ";
    }
}
void insertioatend(int arr[],int val,int n){
    arr[n]=val;
   n++;
   for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
   }
}
void insertionarpos(int arr[],int data,int pos,int n){
   for(int i=n;i>pos;i--){
    arr[i]=arr[i-1];
   }
   arr[pos]=data;
   n++;
   for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
   }
}
void deletion(int arr[],int n){
    for(int i=1;i<n;i++){
      arr[i-1]=arr[i];
    }
    n--;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
void deletionpos(int arr[],int n,int pos){
    for(int i=pos;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    n--;
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}
void merge(int arr[],int arr2[],int n,int n2){
    int ind1=0;
    int ind2=0;
    int index=0;
    int merge[n+n2];
    while(ind1<n &&ind2<n2){
        if(arr[ind1]<arr2[ind2]){
            merge[index++]=arr[ind1++];
        }else{
            merge[index++]=arr2[ind2++];
        }
    }
    while(ind1<n){
        merge[index++]=arr[ind1++];
    }
    while(ind2<n2){
        merge[index++]=arr2[ind2++];
    }
    for(int i=0;i<n+n2;i++){
        cout<<merge[i]<<" ";
    }
};
int main()
{
    int n;
    cout << "enter n" << endl;
    cin >> n;
    int arr[10];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    //  int b =sizeof(arr)/sizeof(arr[0]);
    //insertion(arr, 100, n);
   // insertioatend(arr,100,n);
   //  insertionarpos(arr,100,3,n);
 //  deletion(arr,n);
}