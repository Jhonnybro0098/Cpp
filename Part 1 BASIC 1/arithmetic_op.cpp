#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the first value : ";
    cin>>a;
    cout<<"Enter the second value : ";
    cin>>b;

    cout<<"The sum is : "<< a+b <<endl;
    cout<<"The substraction is : "<< a-b <<endl;
    cout<<"The multiplication is : "<< a*b <<endl;
    cout<<"The division is : "<< a/b <<endl;
    cout<<"The remainder is : "<< a%b <<endl;
    cout<<"The incriment of first value is : "<< a++ <<endl;
    cout<<"The decriment of second value is : "<< a-- <<endl;
    cout<<"The incriment of first value is : "<< ++a <<endl;
    cout<<"The decriment of second value is : "<< --a <<endl;
    cout<<endl;
    return 0;
}