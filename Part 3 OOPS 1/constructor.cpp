#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    Complex(void);

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};
Complex::Complex(void)
{
    cout << "Enter real value : ";
    cin >> a;
    cout << "Enter imagenary value : ";
    cin >> b;
}
int main()
{
    Complex c1;
    c1.printNumber();
    return 0;
}