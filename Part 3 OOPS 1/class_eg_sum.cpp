#include <iostream>
using namespace std;
class addition
{
private:
    int num1, num2, result;

public:
    void read()
    {
        cout << "Enter first number : ";
        cin >> num1;
        cout << "Enter second number : ";
        cin >> num2;
    }

    void sum()
    {
        result = num1 + num2;
    }

    void print()
    {
        cout << num1 << " + " << num2 << " = " << result << endl;
    }
};

int main()
{
    addition n1;
    cout << "Addition : \n";
    n1.read();
    n1.sum();
    n1.print();
    return 0;
}