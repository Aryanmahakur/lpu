#include<iostream>
using namespace std;
int* fun(){
    int a=10;
    cout<<a<<endl;
    return &a;
}
int main(){
    int* ptr;
    ptr=fun();
    cout<<*ptr;
    return 0;
}