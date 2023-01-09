#include<iostream>
using namespace std;
class Base1{
    protected:
        int base1int;
    public:
        void set_base1(int a){
            base1int = a;
        }
};
class Base2{
    protected:
        int base2int;
    public:
        void set_base2(int a){
            base2int = a;
        }
};
class Base3{
    protected:
        int base3int;
    public:
        void set_base3(int a){
            base3int = a;
        }
};
class Derived : public Base1 , public Base2 , public Base3{
    public:
        void show(){
            cout<<"The value of Base1 is : "<<base1int<<endl;
            cout<<"The value of Base2 is : "<<base2int<<endl;
            cout<<"The value of Base3 is : "<<base3int<<endl;
            cout<<"The sum of values is "<<base1int+base2int+base3int<<endl;
        }
};

int main()
{
    int a,b,c;
    Derived jhonny;
    cout<<"Enter the value of Base1 : ";
    cin>>a;
    jhonny.set_base1(a);
    cout<<"Enter the value of Base2 : ";
    cin>>b;
    jhonny.set_base2(b);
    cout<<"Enter the value of Base3 : ";
    cin>>c;
    jhonny.set_base3(c);
    jhonny.show();
    return 0;
}