#include <iostream>
using namespace std;
int main()
{
    float *p = new float(34.67);
    int *arr = new int[4];
    arr[0] = 41;
    arr[1] = 42;
    arr[2] = 43;
    arr[3] = 44;
    cout << "Value of p is " << *p << endl;
    cout << "Value of arr[0] is " << arr[0]<<endl;
    cout << "Value of arr[1] is " << arr[1]<<endl;
    cout << "Value of arr[2] is " << arr[2]<<endl;
    cout << "Value of arr[3] is " << arr[3]<<endl;

    delete p;
    delete[] arr;
    return 0;
}