#include <iostream>
using namespace std;
class Employee
{
    int id;
    static int count;

public:
    void setData()
    {
        cout << "Enter Employee ID : ";
        cin >> id;
        count++;
    }
    void getData()
    {
        cout << "ID of Employee " << count << " is " << id << endl;
    }
    static void getCount()
    {
        cout << "The value of Count is " << count << endl;
    }
};
int Employee::count;
int main()
{
    Employee e1, e2;
    e1.setData();
    e1.getData();
    Employee::getCount();
    e2.setData();
    e2.getData();
    Employee::getCount();
    return 0;
}