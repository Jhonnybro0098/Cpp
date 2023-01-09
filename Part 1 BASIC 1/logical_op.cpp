#include<iostream>
using namespace std;
int main(){
    int a,b;
    cout<<"Enter the first value : ";
    cin>>a;
    cout<<"Enter the second value : ";
    cin>>b;
    cout<<"Following are the logical operators in C++"<<endl;
    cout<<"The value of this logical and operator ((a==b) && (a<b)) is:"<<((a==b) && (a<b))<<endl; 
    cout<<"The value of this logical or operator ((a==b) || (a<b)) is:"<<((a==b) || (a<b))<<endl; 
    cout<<"The value of this logical not operator (!(a==b)) is:"<<(!(a==b))<<endl; 
    return 0;
}