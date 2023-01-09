#include <iostream>
using namespace std;
int main()
{
    int age;
    cout << "Enter your age : ";
    cin >> age;
    switch (age)
    {
    case 18:
        cout << "You are special." << endl;
        break;
    case 13:
        cout << "You are teen." << endl;
        break;
    default:
        cout << "You are not so special." << endl;
        break;
    }
    return 0;
}