#include <iostream>
#include <string>

using namespace std;
class binary
{
private:
    string s;

public:
    void read();
    void chk_bin();
    void ones_compliment();
    void display();
};

void binary::read()
{
    cout << "Enter a binary number : ";
    cin >> s;
}
void binary::chk_bin()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format" << endl;
            exit(0);
        }
    }
}
void binary::ones_compliment()
{
    int i;
    chk_bin();
    for (i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}
void binary::display(){
    cout<<"Complimenting your binary number"<<endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout<<s.at(i);
    }
    cout<<endl;
}

int main()
{
    binary b;
    b.read();
    b.display();
    b.ones_compliment();
    b.display();
    return 0;
}