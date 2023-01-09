#include<iostream>
using namespace std;
class Point{
    int x,y;
    public:
        Point(int x=0,int y=0):x{x},y{y} {}
        Point operator + (const Point& a){
            Point p;
            p.x=x+a.x;
            p.y=y+a.y;
            return p;
        }
        Point operator - (const Point& a){
            Point p;
            p.x=x-a.x;
            p.y=y-a.y;
            return p;
        }
        void Display(){
            cout<<" X: "<<x<<" Y: "<<y<<endl;
        }
};
int main()
{
    Point p1(1,3),p2(4,5);
    Point p3=p1+p2;
    p3.Display();
    Point p4;
    p4=p3-p1;
    p4.Display();
    return 0;
}