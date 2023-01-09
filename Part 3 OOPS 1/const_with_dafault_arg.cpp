#include <iostream>
using namespace std;
class Simple
{
    int data1;
    int data2;
    int data3;

public:
    Simple(int a, int b = 7, int c = 3)
    {
        data1 = a;
        data2 = b;
        data3 = c;
    }
    void printData();
};
void Simple::printData()
{
    cout << "First number is " << data1 << endl;
    cout << "Second number is " << data2 << endl;
    cout << "Third number is " << data3 << endl;
}
int main()
{
    Simple s(3, 6);
    s.printData();
    return 0;
}