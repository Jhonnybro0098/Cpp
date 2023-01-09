#include <iostream>
using namespace std;
float moneyRecieved(int money1, float factor = 1.04)
{
    return money1 * factor;
}
void strlen(const char*p){
    //Code 
}
int main()
{
    int money;
    cout << "Enter the money in your account : ";
    cin >> money;
    cout << "For new customers" << endl;
    cout << "You have RS " << money << " in your account and You will recieve RS " << moneyRecieved(money) << " after one year" << endl;
    cout << "For VIP" << endl;
    cout << "You have RS " << money << " in your account and You will recieve RS " << moneyRecieved(money,1.1) << " after one year" << endl;
    return 0;
}