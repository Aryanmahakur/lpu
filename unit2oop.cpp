#include<iostream>
using namespace std;
int main(){
    void *ptr;
    int a;
    ptr=&a;
    cout<<*(int *)ptr<<endl;
   // char b='A';
    int c=97;
    cout<<c<<char(97)<<endl;
    char b='A';
    ptr=&b;
    cout<<*(char *)ptr<<endl;
    int arr[]={1,24,56,43,534,234};
    cout<<arr<<" "<<arr[0]<<*arr<<" "<<&arr[0];
    return 0;
}