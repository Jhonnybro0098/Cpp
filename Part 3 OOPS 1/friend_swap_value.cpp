#include <iostream>
using namespace std;
class c1;
class c2;
class c1
{
    int val1;
    friend void exchange(c1 &, c2 &);

public:
    void indata()
    {
        cout << "Enter the first value : ";
        cin >> val1;
    }
    void display()
    {
        cout << val1 << endl;
    }
};
class c2
{
    int val2;
    friend void exchange(c1 &, c2 &);

public:
    void indata()
    {
        cout << "Enter the second value : ";
        cin >> val2;
    }
    void display()
    {
        cout << val2 << endl;
    }
};
void exchange(c1 &x, c2 &y)
{
    int temp;
    temp = x.val1;
    x.val1 = y.val2;
    y.val2 = temp;
}
int main()
{
    c1 o1;
    c2 o2;
    o1.indata();
    o2.indata();
    exchange(o1, o2);
    cout << "The value of c1 after swap : ";
    o1.display();
    cout << "The value of c2 after swap : ";
    o2.display();
    return 0;
}