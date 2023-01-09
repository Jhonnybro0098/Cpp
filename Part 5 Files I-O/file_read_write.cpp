#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    string st1="Jhonny Bhai";
    //Opening files using constructors and writing it
    ofstream out("iofiles/sample1.txt");
    out<<st1;

    string st2;
    //Opening files using constructors and reading it
    ifstream in("iofiles/sample2.txt");
    getline(in,st2);
    cout<<st2;
    return 0;
}