#include <iostream>
using namespace std;

class Student
{
protected:
    int roll;

public:
    void set_roll(int r)
    {
        roll = r;
    }
    void get_roll()
    {
        cout << "Roll Number is : " << roll << endl;
    }
};

class Exam : public Student
{
protected:
    float maths;
    float physics;
    float english;
    float hindi;
    float science;

public:
    void set_marks(float m, float p, float e, float h, float s)
    {
        maths = m;
        physics = p;
        science = s;
        english = e;
        hindi = h;
    }
    void get_marks()
    {
        cout << "Marks obtained in maths : " << maths << endl;
        cout << "Marks obtained in physics : " << physics << endl;
        cout << "Marks obtained in english : " << english << endl;
        cout << "Marks obtained in hindi : " << hindi << endl;
        cout << "Marks obtained in science : " << science << endl;
    }
};

class Result : public Exam
{
    float percentage;
    float total;

public:
    void display_result()
    {
        get_roll();
        get_marks();
        total = maths + english + science + hindi + physics;
        percentage = total / 5;
        cout << "The result is : " << percentage << "%" << endl;
    }
};
int main()
{
    Result j;
    j.set_roll(2011);
    j.set_marks(98.0, 97.0, 96.0, 99.0, 98.0);
    j.display_result();
    return 0;
}