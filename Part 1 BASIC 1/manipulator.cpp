#include <iostream>
#include <iomanip> //iomanip is the library which contains setw.

using namespace std;
int main()
{
    int a = 43, b = 545, c = 5443;

    // This is without using setw.
    cout << "Output without setw " << a << endl;
    cout << "Output without setw " << b << endl;
    cout << "Output without setw " << c << endl;
    // This is using setw.
    cout << "Output using setw " << setw(4) << a << endl;
    cout << "Output using setw " << setw(4) << b << endl;
    cout << "Output using setw " << setw(4) << c << endl;
    return 0;
}