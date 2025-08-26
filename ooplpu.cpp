#include <iostream>
using namespace std;
int x=120;
int main()
{
int arr[5]={1,2,3,4,5};
int n= sizeof(arr)/sizeof(arr[0]);
cout<<" enter numbers"<<endl;
for (int i = 0; i < n; i++)
{
   cin>>arr[i];
  
}


cout<<"numbers you have entered"<<endl;
for (int i = 0; i < n; i++)
{
  cout<<arr[i]<<"  ";
}

    
   return 0;
}
