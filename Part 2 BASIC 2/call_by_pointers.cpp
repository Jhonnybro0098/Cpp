#include <iostream>
using namespace std;
void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int x = 2, y = 5;
    cout << "The values before swaping are " << x << " " << y << endl;
    swap(&x, &y);
    cout << "The values after swapping are " << x << " " << y << endl;
    return 0;
}