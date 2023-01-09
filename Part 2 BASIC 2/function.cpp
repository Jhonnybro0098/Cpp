#include<iostream>
using namespace std;
int sum(int a,int b); //Function prototype
int main()
{
    int num1,num2;
    cout<<"Enter the value of first number : ";
    cin>>num1;
    cout<<"Enter the value of second number : ";
    cin>>num2;
    cout<<"The sum is : "<<sum(num1,num2);  //Function call
    return 0;
}

int sum(int a, int b){
    int c=a+b;           //Function defination
    return c;
}