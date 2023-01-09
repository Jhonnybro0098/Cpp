#include<iostream>
using namespace std;
class Weight{
    int kg;
    public:
    Weight(){
        kg=0;
    }
    Weight(int x){
        kg=x;
    }
    void operator ++(){
        ++kg;
    }
    void operator ++(int){
        kg++;
    }
    void display(){
        cout<<"Weight in KG : "<<kg<<endl;
    }
};
int main()
{
    Weight w1(78);
    ++w1;
    w1++;
    w1.display();
    return 0;
}