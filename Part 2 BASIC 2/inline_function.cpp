#include <iostream>
using namespace std;
inline int product(int a, int b)
{
    return a * b;
}
int main()
{
    int a, b;
    cout << "Enter the value of first number ";
    cin >> a;
    cout << "Enter the value of second number ";
    cin >> b;
    cout << "The product is : " << product(a, b);
    return 0;
}