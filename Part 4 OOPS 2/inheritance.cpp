#include <iostream>
using namespace std;
class Employee
{
public:
    int id;
    float salary;
    Employee(int inpid)
    {
        id = inpid;
        salary = 34.0;
    }
    Employee() {}
};

class Programmer : public Employee
{
public:
    int languageCode;
    Programmer(int inpid)
    {
        id = inpid;
        languageCode = 7;
    }
    void getData()
    {
        cout << id << endl;
    }
};
int main()
{
    Employee j1(1), j2(2);
    cout << j1.salary << endl;
    cout << j2.salary << endl;
    Programmer skillF(10);
    cout << skillF.id << endl;
    skillF.getData();
    return 0;
}