#include<iostream>
using namespace std;

class Test{
    public:
    int age;
    static int count;
};
int Test::count=98;
int main(){
    Test t,t2;
    t.age=20;
    t2.age=25;
    cout<<t.age<<endl;
    cout<<t2.age<<endl;
    t2.count=100;
    Test::count=1;
    cout<<t2.count<<endl;
    return 0;
}