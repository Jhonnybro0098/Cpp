#include <iostream>
#include <cmath>
using namespace std;

class Simple
{
protected:
    float a, b;

public:
    void getValue1()
    {
        cout << "Enter first value : ";
        cin >> a;
        cout << "Enter second value : ";
        cin >> b;
    }
    void Simple_Calc()
    {
        int op;
        cout << "---------Choose an Operation---------" << endl;
        cout << "1. Addition\n2. Substraction\n3. Multiplication\n4. Division" << endl;
        cin >> op;
        switch (op)
        {
        case 1:
            cout << "Addition = " << a + b << endl;
            break;
        case 2:
            cout << "Substraction = " << a - b << endl;
            break;
        case 3:
            cout << "Multiplication = " << a * b << endl;
            break;
        case 4:
            cout << "Divison = " << a / b << endl;
            break;

        default:
            cout << "Invalid Input!" << endl;
            break;
        }
    }
};

class Scientific
{
protected:
    float a;

public:
    void getValue2()
    {
        cout << "Enter the value : ";
        cin >> a;
    }
    void Scientific_Calc()
    {
        int op;
        cout << "---------Choose an Operation---------" << endl;
        cout << "1. Log\n2. Square\n3. Square Root\n4. Absolute Value" << endl;
        cin >> op;
        switch (op)
        {
        case 1:
            cout << "Log of " << a << " = " << log10(a) << endl;
            break;
        case 2:
            cout << "Square of " << a << " = " << pow(a, 2) << endl;
            break;
        case 3:
            cout << "Square Root of " << a << " = " << sqrt(a) << endl;
            break;
        case 4:
            cout << "Absolute Value of " << a << " = " << abs(a) << endl;
            break;

        default:
            cout << "Invalid Input!" << endl;
            break;
        }
    }
};
class Hybrid : public Simple, public Scientific
{
public:
    void Calc()
    {
        int ab;
        cout << "--------Choose a Calculator--------" << endl;
        cout << "1. Simple Calculator\n2. Scientific Calculator\n";
        cin >> ab;
        switch (ab){
        case 1:
        {
            cout<<"Simple Calculator"<<endl;
            getValue1();
            Simple_Calc();
            break;
        }
        case 2:
        {   
            cout<<"Scientific Calculator"<<endl;
            getValue2();
            Scientific_Calc();
            break;
        }
        default:
        {
            cout << "Invalid Input!" << endl;
        }
        }
    }
};
int main()
{
    Hybrid h1;
    h1.Calc();
    return 0;
}