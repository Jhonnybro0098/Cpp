#include <iostream>
using namespace std;
int main()
{
    int a = 34;
    int *b = &a;
    int **c = &b;
    cout << "The address of b is " << &b << endl;
    cout << "The address of b is " << c << endl;
    cout << "The value at address " << *c << endl;
    cout << "The value at address value at (value at c) is " << **c << endl;
    return 0;
}