#include<iostream>
using namespace std;
class Complex{
    int real,imag;
    public:
    Complex(int r,int i){
        real=r;
        imag=i;
    }
    Complex(){
        real=0;
        imag=0;
    }
    Complex operator + (Complex &c){
        Complex temp;
        temp.real=real+c.real;
        temp.imag=imag+c.imag;
        return temp;
    }
    void Display(){
        cout<<real<<" + "<<imag<<"i"<<endl;
    }
};
int main()
{
    Complex c1(3,4), c2(8,5);
    Complex c3=c1+c2;
    c3.Display();
    return 0;
}