#include<iostream>
using namespace std;
class vehicle{
    public:
    string type;
    int number;
    int year;
   void printdetails(string type,int number,int year){
     cout<<type<<endl;
     cout<<number<<endl;
     cout<<year<<endl;
   }
};
int main(){
    vehicle v;
    v.printdetails("car",1234,2025);
    return 0;
}