#include <iostream>
using namespace std;

class Point
{
    int x, y;

public:
    Point(int a, int b)
    {
        x = a;
        y = b;
    }
    void getPoint(){
        cout<<"Enter the value of x-axis : ";
        cin>>x;
        cout<<"Enter the value of y-axis : ";
        cin>>y;
    }

    void displayPoint()
    {
        cout << "The point is (" << x << "," << y << ")" << endl;
    }
};
int main()
{
    int a,b;
    Point p(a,b);
    p.getPoint();
    p.displayPoint();
    return 0;
}