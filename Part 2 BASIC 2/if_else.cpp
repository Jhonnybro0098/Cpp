#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter your age (in years) : ";
    cin >> age;

    if (age < 18)
    {
        cout << "You cannot come to party." << endl;
    }
    else if (age == 18)
    {
        cout << "You can come with special pass." << endl;
    }
    else
    {
        cout << "You can come to party." << endl;
    }
    return 0;
}