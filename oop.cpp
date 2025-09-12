#include <iostream>
using namespace std;
class vehicle
{
public:
    string type;
    int number;
    int year;
    void printdetails()
    {
        cout << type << endl;
        cout << number << endl;
        cout << year << endl;
    }
    // void printdetails(string type, int number, int year)
    // {
    //     cout << type << endl;
    //     cout << number << endl;
    //     cout << year << endl;
    // }
    //pass by refrence;
    void add(int *x,int *y){
        cout<<*x<<endl;
        *x=*x+*y;
        cout<<*x<<endl;
    }
    
};
int main()
 {
     vehicle v;
     int a=10;
     int b=10;
     v.add(&a,&b);
//     v.type="bike";
//     v.year=2025;
//     v.number=1234;
//     v.printdetails();

//  int a=10;
//  int b=10;
// v.add(a,b);
// cout<<a<<endl;
// int *ptr;
// int a=30;
// ptr= &a;
// cout<<&a<<" "<<ptr<<" "<<*ptr<<endl;
// *ptr=801;
// cout<<*ptr;
// int b= 50;
// ptr=&b;
// cout<<&b;
// cout<<ptr<<" "<<*ptr;
//  int b=a;
//  int &c=a;

// cout<<a<<" "<<b<<" "<<c<<endl;
// b=40;
// cout<<a<<" "<<b<<" "<<c<<endl;
// c=90;
// cout<<a<<" "<<b<<" "<<c<<endl;
// a=100;
// cout<<a<<" "<<b<<" "<<c<<endl;
    return 0;
}