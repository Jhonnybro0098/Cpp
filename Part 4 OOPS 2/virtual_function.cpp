#include <iostream>
using namespace std;
class BaseClass
{
public:
    int var_base = 1;
    virtual void display()
    {
        cout << "Value of base class variable : " << var_base << endl;
    }
};
class DerivedClass : public BaseClass
{
public:
    int var_derived = 2;
    void display()
    {
        cout << "Value of base calss variable : " << var_base << endl;
        cout << "Value of derived class varibale : " << var_derived << endl;
    }
};
int main()
{
    BaseClass *base_class_pointer;
    BaseClass Obj_base;
    DerivedClass Obj_derived;
    base_class_pointer = &Obj_derived;
    base_class_pointer->display();
    return 0;
}