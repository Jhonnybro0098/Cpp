#include <iostream>
using namespace std;
typedef struct employee
{
    int eId;
    char favChar;
    float salary;
} ep;
int main()
{
    ep jhonny;
    jhonny.eId = 45;
    jhonny.favChar = 't';
    jhonny.salary = 909090;
    cout << "Employee ID : " << jhonny.eId << endl;
    cout << "Fav Character : " << jhonny.favChar << endl;
    cout << "Salary : " << jhonny.salary << endl;
    return 0;
}