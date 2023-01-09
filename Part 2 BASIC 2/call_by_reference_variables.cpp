#include <iostream>
using namespace std;
void swap(int &a, int &b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}
int main()
{
    int x = 4, y = 6;
    cout << "The values before swapping x = " << x << " "
         << "y = " << y << endl;
    swap(x, y);
    cout << "The values after swapping x = " << x << " "
         << "y = " << y << endl;
    return 0;
}