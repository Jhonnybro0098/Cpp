#include<iostream>
using namespace std;
int main(){
    int a[5]={45,65,46,67,76};
    int *p=a;
    cout<<*p<<endl;
    cout<<*(p+1)<<endl;
    cout<<*(p+2)<<endl;
    cout<<*(p+3)<<endl;
    cout<<*(p+4)<<endl;
    //Using for loop
    for (int i = 0; i < 5; i++)
    {
        cout<<*(p+i)<<endl;
    }
    return 0;
}