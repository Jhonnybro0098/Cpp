#include <iostream>
using namespace std;
class shop
{
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter()
    {
        counter = 0;
    }
    void setPrice();
    void displayPrice();
};

void shop::setPrice()
{
    cout << "Enter ID of Item " << counter + 1 << " : ";
    cin >> itemId[counter];
    cout << "Enter price of Item : ";
    cin >> itemPrice[counter];
    counter++;
}
void shop::displayPrice()
{
    for (int i = 0; i < counter; i++)
    {
        cout << "Item ID is " << itemId[i] << " and Price is " << itemPrice[i] << endl;
    }
}
int main()
{
    int a;
    cout << "Enter number of items : ";
    cin >> a;
    shop one;
    one.initCounter();
    for (int i = 0; i < a; i++)
    {
        one.setPrice();
    }
    one.displayPrice();
    return 0;
}