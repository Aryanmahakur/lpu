#include<iostream>
#include<fstream>
using namespace std;
int main(){
    fstream file;
    int a=20,b;
    file.open("test.bin",ios::out | ios::binary);
    file.write(reinterpret_cast<char*>(&a),sizeof(int));
    file.seekg(0,ios::beg);
    file.read(reinterpret_cast<char*>(&b),sizeof(int));
    cout<<b<<endl;
    return 0;
}