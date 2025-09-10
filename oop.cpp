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
};
int main()
 {
//     vehicle v;
//     v.type="bike";
//     v.year=2025;
//     v.number=1234;
//     v.printdetails();

 int a=10;
 int b=a;
 int &c=a;

cout<<a<<" "<<b<<" "<<c<<endl;
b=40;
cout<<a<<" "<<b<<" "<<c<<endl;
c=90;
cout<<a<<" "<<b<<" "<<c<<endl;
a=100;
cout<<a<<" "<<b<<" "<<c<<endl;
    return 0;
}