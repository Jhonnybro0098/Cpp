#include <iostream>
using namespace std;
int sum(int a, int b)
{
    return a + b;
}
int sum(int a, int b, int c)
{
    return a + b + c;
}
int main()
{
    cout << "The sum is " << sum(44, 55) << endl;
    cout << "The sum is " << sum(4, 5, 9) << endl;
    return 0;
}