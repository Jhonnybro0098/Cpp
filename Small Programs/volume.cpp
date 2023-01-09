#include <iostream>
using namespace std;
float volume(float r, float h)
{
    // Volume of cylinder
    return (3.14 * r * r * h);
}
float volume(float a)
{
    // Volume of cube
    return (a * a * a);
}
float volume(float a, float b, float c)
{
    // Volume of Cuboid
    return (a * b * c);
}
int main()
{
    cout << "The volume of cuboid " << volume(3, 5, 6) << endl;
    cout << "The volume of cube " << volume(3) << endl;
    cout << "The volume of cylinder " << volume(3, 5) << endl;
    return 0;
}