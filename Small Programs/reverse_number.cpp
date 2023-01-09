#include <iostream>
#include <conio.h>

using namespace std;

int rev(int n);

int main()
{
    int x;
    cout << "Enter any number to reverse it : ";
    cin >> x;
    cout << "The reverse form of " << x << " is " << rev(x);
    return 0;
}

int rev(int n)
{
    int num=0;
    while (n != 0)
    {
        int r = n % 10;
        num = num * 10 + r;
        n = n / 10;
    }
    return num;
}