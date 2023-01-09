#include <iostream>
using namespace std;
class Number
{
    int a;

public:
    Number()
    {
        a = 0;
    }
    Number(int num)
    {
        a = num;
    }
    Number(Number &obj)
    {
        cout << "Copy Constructor invoked"<<endl;
        a = obj.a;
    }
    void display()
    {
        cout << "The value of this object is : " << a << endl;
    }
};
int main()
{
    Number x, y, z;
    z = 69;
    x.display();
    y.display();
    z.display();

    Number z1(z);
    z1.display();
    Number z2=x;
    z2.display();
    return 0;
}