#include <iostream>
using namespace std;
class calc{
   public:
   int a;
   int b;
   int add();
   int sub(){
      return a-b;
   }
   int mul(){
      return a*b;
   }
   int divi(){
      return a/b;
   }
};
int calc::add(){
   return a+b;
}

int main(){
   calc c;
   c.a = 10;
   c.b = 5;
   cout << "Addition: " << c.add() << endl;
   cout << "Subtraction: " << c.sub() << endl;
   cout << "Multiplication: " << c.mul() << endl;
   cout << "Division: " << c.divi() << endl;
   return 0;
}