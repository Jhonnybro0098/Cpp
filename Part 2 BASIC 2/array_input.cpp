#include<iostream>
using namespace std;
int main()
{
    int a[5];
    for (int i = 0; i < 5; i++)
    {
        cout<<"Enter the value for a"<<i<<" ";
        cin>>a[i];
    }

    for (int i = 0; i < 5; i++)
    {
        cout<<"The value of a"<<i<<" is "<<a[i]<<endl;
    }
    return 0;
}