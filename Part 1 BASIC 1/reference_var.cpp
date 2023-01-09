#include <iostream>
using namespace std;
int main()
{
    int x = 10;
    int &ref = x; // this is a reference variable for x
    cout << x << endl;
    cout << ref << endl;
    return 0;
}