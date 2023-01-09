#include <iostream>
using namespace std;
int main()
{
    int i, n;
    bool is_prime = true;

    cout << "Enter the positive integer : ";
    cin >> n;

    if (n < 1)
    {
        cout << "Number need to be greater than 1";
    }
    else if (n == 1)
    {
        cout << "1 is neither prime nor composite";
    }
    else
    {
        for (i = 2; i <= (n / 2); i++)
        {
            if ((n % i) == 0)
            {
                is_prime = false;
                break;
            }
        }
        if (is_prime)
        {
            cout << n << " is a Prime number";
        }
        else
        {
            cout << n << " is a Composite number";
        }
    }

    return 0;
}