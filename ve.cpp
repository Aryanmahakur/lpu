#include <iostream>
#include <iomanip>
using namespace std;

void removenegative(double arr[], int n) {
    cout << fixed << setprecision(1);// this make print the number after decimal
    for (int i = 0; i < n; i++) {
        if (arr[i] > 0.0) {
            cout << arr[i] << " ";
        }
    }
}

int main() {
    int n;
    cin>>n;
    double arr[n];
    for (int  i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    
   removenegative(double
    return 0;
}
