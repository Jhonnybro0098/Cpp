#include <iostream>
using namespace std;
int main()
{
    int a = 34;
    int *b = &a;
    cout << "The address of a is " << b << endl;
    cout << "The address of a is " << &a << endl;
    cout << "The value at address b is " << *b << endl; // Deference operator
    return 0;
}