#include<iostream>
using namespace std;

class test1 {
    public:
    int x;
    int y;
    test1 setvalues(int a,int b){
        this->x=a;
        this->y=b;
        return *this;
    }
    void add(){
        cout<<x+y<<endl;
    }
    void print(){
       
        cout<<x<<"   "<<y;
    }

};

int main(){
    test1 t1;
    cout<<&t1;
    cout<<t1.setvalues(10,20).x;
    //t1.print();
}
