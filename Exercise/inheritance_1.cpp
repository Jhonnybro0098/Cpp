#include<iostream>
using namespace std;

class Base{
    protected:
        int x=9;
};
class Derived: public Base{
    public:
        void print(){
            cout<<x<<endl;
        }
};
int main()
{
    Derived obj;
    obj.print();
    return 0;
}