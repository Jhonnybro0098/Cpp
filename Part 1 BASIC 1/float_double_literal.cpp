#include <iostream>
using namespace std;
int main()
{
    float a = 34.8;         // It is double by default
    long double b = 78.90;  // It is also double by default
    float x = 34.8f;        // Now it is float
    long double y = 78.90l; // Now it is long double
    cout << sizeof(a) << endl;
    cout << sizeof(b) << endl;
    cout << sizeof(x) << endl;
    cout << sizeof(y) << endl;

    return 0;
}