#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream out;
    out.open("test2.txt");
    out<<"This is me"<<endl;
    out<<"This is also me";
    out.close();
    return 0;
}