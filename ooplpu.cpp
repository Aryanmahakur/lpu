#include <iostream>
using namespace std;
 class rajma{
   public:
   int water;
   int rajma;
   bool spicy;
   string spices[6];
   int givesum(int a,int b){
      return a+b;
   }

 };
int main(){
   rajma s;
   

cout<<s.givesum(5,5)<<endl;
   // int arr[5] = {1, 2, 3, 4, 5};
   // int n = sizeof(arr) / sizeof(arr[0]);
   // cout << " enter numbers" << endl;
   // int start = 0;
   // int end = n - 1;

   // // while (start < end)
   // // {
   // //    int temp = arr[start];
   // //    arr[start] = arr[end];
   // //    arr[end] = temp;
   // //    start++;
   // //    end--;

   // // }
   // for (int i = 0,  j = 4; i < j ; i++, j--)
   // {
   //    int temp = arr[i];
   //    arr[i] = arr[j];
   //    arr[j] = temp;
   // }

   // cout << "numbers you have entered" << endl;
   // for (int i = 0; i < n; i++)
   // {
   //    cout << arr[i] << "  ";
   // }

   return 0;
}
