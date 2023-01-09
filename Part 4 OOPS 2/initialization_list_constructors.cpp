#include <iostream>
using namespace std;
class Test
{
    int a, b;

public:
    Test(int i, int j) : a(i), b(j)
    {
        cout << "Constructor called " << endl;
        cout << "Value of a is " << a << endl;
        cout << "Value of b is " << b << endl;
    }
};
int main()
{
    Test t(34, 65);
    return 0;
}