#include <iostream>
using namespace std;
class Employee
{
    int id;
    int salary;

public:
    void setId()
    {
        static int n;
        salary = 122;
        cout << "Enter ID of Employee "<<n+1<<" : ";
        cin >> id;
        n++;
    }
    void getId()
    {
        cout << "The ID of the employee is " << id << endl;
    }
};
int main()
{
    int n;
    Employee e[n];
    cout << "Enter the number of Employee : ";
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        e[i].setId();
        e[i].getId();
    }

    return 0;
}