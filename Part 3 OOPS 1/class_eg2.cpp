#include <iostream>
using namespace std;

class student
{
public:
    string name;
    int rollno;
    float percentage;
};

int main()
{
    student jhonny;
    cout << "Enter the name of student : ";
    cin >> jhonny.name;
    cout << "Enter the Roll Number : ";
    cin >> jhonny.rollno;
    cout << "Enter the percentage in Exams : ";
    cin >> jhonny.percentage;

    cout << "Name : " << jhonny.name << endl;
    cout << "Roll Number : " << jhonny.rollno << endl;
    cout << "Percentage : " << jhonny.percentage << endl;

    return 0;
}