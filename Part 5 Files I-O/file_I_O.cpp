#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream out("test.txt");

    string name;
    cout<<"Enter your name : ";
    getline(cin,name);

    out<<"My name is "+name<<endl;
    out.close();

    ifstream in("test.txt");
    string content;
    getline(in,content);

    cout<<"The contnt of the file is : "<<content<<endl;

    in.close();
    return 0;
}