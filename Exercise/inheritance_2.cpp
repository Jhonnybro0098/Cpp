#include<iostream>
using namespace std;

class Animal{
    public:
        void eat(){
            cout<<"Eating"<<endl;
        }
        void walk(){
            cout<<"Walking"<<endl;
        }
};
class Cat:public Animal{
    public :
        void talk(){
            cout<<"Miaoooo"<<endl;
        }
};
class Dog: public Animal{
    public :
        void talk(){
            cout<<"Baooo"<<endl;
        }
};
class Dinosaur:public Animal{
    public :
        void talk(){
            cout<<"Fuck Off"<<endl;
        }
};
int main()
{
    Dog d;
    Cat c;
    Dinosaur d1;
    d.eat();
    c.eat();
    d1.eat();
    d.talk();
    c.talk();
    d1.talk();
    return 0;
}