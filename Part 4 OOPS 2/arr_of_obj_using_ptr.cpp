#include <iostream>
using namespace std;
class ShopItem
{
    int id;
    float price;

public:
    void setData(int a, float b)
    {
        id = a;
        price = b;
    }
    void getData()
    {
        cout << "ID of item : " << id << endl;
        cout << "Price of Item : " << price << endl;
    }
};
int main()
{
    int n;
    cout << "Enter the number of items : ";
    cin >> n;
    ShopItem *ptr = new ShopItem[n];
    ShopItem *ptr1 = ptr;
    int p, i;
    float q;
    for (i = 0; i < n; i++)
    {
        cout << "Enter the ID and Price of item " << i + 1 << " : ";
        cin >> p >> q;
        ptr->setData(p, q);
        ptr++;
    }
    for (i = 0; i < n; i++)
    {
        cout << "Item number : " << i + 1 << endl;
        ptr1->getData();
        ptr1++;
    }
    return 0;
}