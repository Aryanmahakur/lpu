#include<iostream>
using namespace std;
class classa{
    private:
    int x;
    public:
    int y;
    void setx(int a){
        x=a;
    }
    friend void fun(classa obja);
    
};

void fun(classa obja){
    cout << "x = " << obja.x << endl;
    classa objb;
    objb.y=100;
    cout << "y = " << obja.y << endl;
}

int main(){
   classa obja;
   obja.setx(20);
   obja.y = 10;
   fun(obja);
    return 0;
}
