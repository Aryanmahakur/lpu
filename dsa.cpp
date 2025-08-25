#include <iostream>
using namespace std;
int main()
{
      int arr[10];

    //     int n;
    //     cin >> n;
    //     for (int i = 0; i < n; i++)
    //     {
    //         cin >> arr[i];
    //     } int arr[5]={10,25,3,40,5};
    //     int newsize = 0;
    //     cout << "hello" << endl;
    //     for (int i = 0; i < n; i++)
    //     {
    //         if (arr[i] != 0)
    //         {
    //             arr[newsize] = arr[i];
    //             newsize++;
    //         }
    //     }
    //     for (int i = 0; i < newsize; i++)
    //     {

    //         cout << arr[i] << endl;
    //     }

    //
    // int count=0;
    // for (int i = 0; i < n; i++)
    // {
    //     arr[i]=arr[i+1];
    //     count++;
    // }

    //  for (int i = 0; i < count; i++)
    //  {
    //     cout<<arr[i];
    //  }
    /*
    int arr[5]={10,25,3,40,5};
     int n= sizeof(arr)/sizeof(arr[0]);
     cout<<n<<endl;
     int max = arr[0];
     int secmax = INT_MIN;
     for (int i = 1; i < n; i++)
     {
         if (arr[i] > max)
         {
             secmax = max;
             max = arr[i];
         }
         else if (arr[i] > secmax && arr[i] != max)
         {
             secmax = arr[i];
         }
     }
     cout << secmax << endl;
    */
// int arr[5] = {1, 2, 5, 5, 5};

// int n = sizeof(arr) / sizeof(arr[0]);
// bool flag=false;
// for (int i = 0; i < n; i++)
// {
//     if (arr[i] == 4)
//     { 
//         flag=true;
//         cout << "found 4 at index " << i << endl;
//     }
// }
// if(flag==false){
//     cout<<"not found"<<endl;
// }
    

    // for (int i = pos; i < n; i++) {
    //     arr[i] = arr[i + 1];
    // }
    // n--; 

    // for (int i = 0; i < n; i++)
    // {
    //     cout << arr[i] << " ";
    // }
    // cout << endl;
     int arr[10];
     int n; 

     //insertion at any point;

      int pos=1;
       if(pos==0){
        for (int i = n-1; i >=0; i--)
        {
             arr[i+1]=arr[i];
           
        }
        arr[0]=20;


        
       }
       for (int i =n-1; i >=pos; i--)
       {
           arr[i+1]=arr[i];
         if(pos==i){
            arr[i]=20;
        }
        
       }
       if(pos==n){
        arr[n+1]=20;
       }
    

    return 0;
}
