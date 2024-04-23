#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex(void)
    {
        a = 0;
        b = 0;
    }
    complex(int x, int y)
    {
        a = x;
        b = y;
    }
    complex(int x)
    {
        a = x;
        b = 0;
    }
    void print()
    {
        cout << a << "+" << b << "i" << endl;
    }
};

int main()
{
    complex s, c2(2, 3), c3(4);

    s.print();
    c2.print();
    c3.print();

    return 0;
}