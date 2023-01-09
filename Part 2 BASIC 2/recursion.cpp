#include <iostream>
using namespace std;

int factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    else
    {
        return n * factorial(n - 1);
    }
}
int main()
{
    int a;
    cout << "Enter the number for factorial : ";
    cin >> a;
    cout << "The factorial of " << a << " is " << factorial(a);
    return 0;
}