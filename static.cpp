#include<iostream>
using namespace std;

class Test{
    public:
    int age;
    static int count;
    static void func(){
   cout<<"function"<<count<<endl;
    }
    static void update(){
        count++;
    }
};
#include <iostream>

class MyClass {
public:
    static int objectCount;

    MyClass() {
        ++objectCount;
    }
};

// Definition and initialization of the static member variable
int MyClass::objectCount = 0;

int main() {
    MyClass obj1;
    MyClass obj2;

    std::cout << "Object count: " << MyClass::objectCount << std::endl; // Outputs: Object count: 2

    return 0;
}

int Test::count=98;
int main(){
    Test t,t2;
    Test::func();
    Test::update();
   

    t.age=20;
    t2.age=25;
    cout<<t.age<<endl;
    cout<<t2.age<<endl;
    Test::count=100;
    Test::count=1;
    cout<<Test::count<<endl;
    
    return 0;
}