#include<iostream>
#include<fstream>
using namespace std;

int main(){
  ifstream file("file.txt");
  string str,str1;
  getline(file,str);
  getline(cin,str1);
  cout<<str1<<endl;

  cout<<str;
  return 0;
}