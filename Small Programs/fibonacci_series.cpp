#include <iostream>
using namespace std;
int fibo(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    else
    {
        return fibo(n - 2) + fibo(n - 1);
    }
}
int main()
{
    int a;
    cout << "Enter the position in fibonacci sequence :";
    cin >> a;
    cout << "The value at position " << a << " in fibonacci sequence is " << fibo(a) << endl;
    return 0;
}