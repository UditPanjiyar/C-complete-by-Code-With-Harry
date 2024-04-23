#include <iostream>
using namespace std;

class binary
{
private:
    string s;
    void chk_binary();

public:
    void read();
    void once_complement();
    void display();
};

void binary ::read()
{
    cout << "enter binary number" << endl;
    cin >> s;
    chk_binary();
}

void binary ::chk_binary()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "incorrect binary format"<<endl;
            break;
        }
        
    }
}

void binary ::once_complement()
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else if (s.at(i) == '1')
        {
            s.at(i) = '0';
        }
    }
}

void binary ::display()
{
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}

int main()
{
    binary b1;

    b1.read();
    // b1.chk_binary();
    b1.once_complement();
    b1.display();

    return 0;
}