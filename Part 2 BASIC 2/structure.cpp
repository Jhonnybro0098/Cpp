#include <iostream>
using namespace std;
struct employee
{
    int eId;
    char favChar;
    float salary;
};

int main()
{
    struct employee jhonny;
    jhonny.eId = 23;
    jhonny.favChar = 't';
    jhonny.salary = 20000;
    cout << "Employee ID : " << jhonny.eId << endl;
    cout << "Fav Character : " << jhonny.favChar << endl;
    cout << "Salary : " << jhonny.salary << endl;
    return 0;
}