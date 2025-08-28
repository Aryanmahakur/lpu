#include <iostream>
using namespace std;
class student
{
public:
   int rollno;
   string name;
   string college;
   string branch;
   int age;

   void printdetails()
   { 
      cin>>rollno;
      cout << "student roll no is " << rollno << " name is " << name << " and age is " << age << " studing in branch " << branch << " at " << college << endl;
   }
};
void getip(student &s1, int rollno, string name, int age, string college, string branch)
{
   s1.rollno = rollno;
   s1.name = name;
   s1.age = age;
   s1.college = college;
   s1.branch = branch;

   s1.printdetails();
}

int main()
{
   student s1;
   getip(s1, 1234, "aryan", 19, "lpu", "cse");
   return 0;
}
