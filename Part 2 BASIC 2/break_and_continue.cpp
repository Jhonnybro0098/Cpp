#include <iostream>
using namespace std;
int main()
{
    for (int i = 0; i < 40; i++)
    {
        if (i == 20)
        {
            break;    //It will terminate the loop .
        }
        cout<<i<<endl;
    }

    for (int a = 0; a < 40; a++)
    {
        if (a == 30)
        {
            continue;   //It will skip the iteration .
        }
        cout<<a<<endl;
    }

    return 0;
}