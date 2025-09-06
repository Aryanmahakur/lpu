#include <iostream>
using namespace std;

void removeduplicates(int arr1[], int& n1)
{
    for (int i = 0; i < n1; i++)
    {
        for (int j = i + 1; j < n1; )
        {
            if (arr1[i] == arr1[j])
            {
                // Shift elements left to remove duplicate
                for (int k = j; k < n1 - 1; k++)
                {
                    arr1[k] = arr1[k + 1];
                }
                n1--;
            }
            elsec
            {
                j++;a
            }
        }
    }
    for (int i = 0; i < n1; i++){
     cout<<arr1[i]<<endl;
    }
}
int main()
{
    int arr1[5] = {3, 8, 8, 20,8};
    int n1 = 5;
    removeduplicates(arr1, n1);
    return 0;
}
   