#include<iostream>
using namespace std;
class Volume{
    public:
    int a,b,c;
        Volume(){}
        int vol(int a,int b,int c){
            int vol;
            vol=a*b*c;
            return vol;
        }
        int vol(int a,int b){
            int vol;
            vol=3.14*a*a*b;
            return vol;
        }
};
int main()
{
    Volume a;
    cout<<"Volume = "<<a.vol(2,3);
    return 0;
}