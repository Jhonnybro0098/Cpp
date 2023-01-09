#include <iostream>
using namespace std;
class Complex
{
    int a, b;

public:
    Complex()
    {
        a = 0;
        b = 0;
    }
    Complex(int x, int y)
    {
        a = x;
        b = y;
    }
    Complex(int x)
    {
        a = x;
        b = 0;
    }
    void printNumber()
    {
        cout << "Complex number is " << a << " + " << b << "i" << endl;
    }
};
int main()
{
    Complex c1;
    c1.printNumber();
    Complex c2(3);
    c2.printNumber();
    Complex c3(4, 5);
    c3.printNumber();
    system("pause");
    return 0;
}