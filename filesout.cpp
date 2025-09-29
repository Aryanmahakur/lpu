#include <iostream>
#include <fstream>
using namespace std;

int main() {
    fstream file;
 //file.open("t.txt", ios::out);
    
//    // file << "hello world";   
 file.open("t.txt",ios::in | ios::out | ios::ate);
//    file<<"hello lpu world";
//  file.flush();
//    file.clear();
//     file.seekg(-9,
//     ios::end);
//    file<<"aaa";
//     string str;
//     getline(file,str);
//      cout<<str;
//     file.close();
cout<<endl;
file<<"hello world"<<endl;
file<<"start lpu"<<endl;
//file.seekp(-10,ios::end);
int a= file.tellp();
cout<<a<<endl;
file.seekp( (a-2) ,ios::beg);
file<<"Start";


    return 0;  
}
