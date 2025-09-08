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
    vehicle v;
    v.type="bike";
    v.year=2025;
    v.number=1234;
    v.printdetails();
    return 0;
}