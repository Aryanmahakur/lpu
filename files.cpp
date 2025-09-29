#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ifstream fiinle;
    ofstream outfile;
    ofstream outfile2;
  //  infile.open("file.txt");
    string str;
  //  getline(infile,str);
    cout<<str<<endl;
    outfile.open("file.txt",ios::app);
    outfile2.open("file2.txt",ios::app);
    outfile<<"this text will be added to end"<<endl;
    outfile2<<"this text will be added to end for files2"<<endl;
    outfile2.close();
    outfile.close();
    outfile.open("file2.txt",ios::app);
    outfile<<"appending using outfile";
    outfile.close();
    outfile.open("file.txt",ios::out);
    outfile<<"overwrting";
    outfile.close();
  //  infile.open("file2.txt",ios::in);
    string line;
 //   getline(infile,line);
    cout<<line;
   // infile.close();
    outfile.open("file.txt",ios::binary);
    int num=100;
    outfile.write((char*)&num,sizeof(num));
    outfile.close();
    outfile.open("file.txt",ios::in | ios::out | ios::ate);
    outfile<<"added by ate";
    outfile.seekp(0);
    outfile<<"start\n";
    outfile.close();
    outfile2.open("file.txt",ios::out | ios::trunc);
    outfile2<<"deleted";
    outfile2.close();
    return 0;
}
