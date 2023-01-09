#include<iostream>
using namespace std;
int gol=6;   //Golbal Variable
void sum(){
    int a;
    cout<<gol;
}
int main(){
    int a=9;  //Local Variable
    sum();
    cout<<gol<<a;
    return 0;
}