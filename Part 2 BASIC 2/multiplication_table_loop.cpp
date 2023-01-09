#include <iostream>
using namespace std;
int main()
{
    int i, n;
    cout << "Enter the number for Multiplication Table : ";
    cin >> n;
    for (i = 1; i <= 10; i++)
    {
        cout << n << " x " << i << " = " << i * n << endl;
    }
    return 0;
}