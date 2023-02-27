#include<iostream>
using namespace std;
class Complex{
    int real,img;
    public:
    void input(){
        cout<<"Enter the value of real part : ";
        cin>>real;
        cout<<"Enter the value of imagenry part : ";
        cin>>img;
    }
    Complex operator +(Complex obj){
        Complex temp;
        temp.real=real+obj.real;
        temp.img=img+obj.img;
        return temp;
    }
    void display (){
        cout<<"Sum is : "<<real<<" + "<<img<<"i"<<endl;
    }

};
int main()
{
    Complex com1,com2,res;
    com1.input();
    com2.input();
    res=com1+com2;
    res.display();
    return 0;
}