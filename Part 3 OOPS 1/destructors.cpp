#include<iostream>
using namespace std;
int count=0;
class num{
    public:
        num(){
            count++;
            cout<<"Object "<<count<<" created"<<endl;
        }
        ~num(){
            cout<<"Object "<<count<<" destroyed"<<endl;
            count--;
        }
};

int main()
{
    num n1;
    {
        cout<<"Entering this block"<<endl;
        num n2,n3;
        cout<<"Exiting this block"<<endl;
    }
    return 0;
}