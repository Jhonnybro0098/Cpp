#include <iostream>
using namespace std;
class Complex
{
    int real, img;

public:
    void setData(int a, int b)
    {
        real = a;
        img = b;
    }
    void getData()
    {
        cout << "The real part is " << real << endl;
        cout << "The imaginary part is " << img << endl;
        cout<<"The complex number is "<<real<<" + "<<img<<"i"<<endl;
    }
};
int main()
{
    // Complex c1;
    // Complex *ptr=&c1;
    Complex *ptr = new Complex;

    (*ptr).setData(3, 4);
    (*ptr).getData();

    // or
    // Arrow Operator
    // ptr->setData(3,4);
    // ptr->getData();
    return 0;
}