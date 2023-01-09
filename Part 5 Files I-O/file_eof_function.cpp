#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream in;
    string st;
    in.open("iofiles/test2.txt");
    while (in.eof() == 0)
    {
        getline(in, st);
        cout << st << endl;
    }
    return 0;
}