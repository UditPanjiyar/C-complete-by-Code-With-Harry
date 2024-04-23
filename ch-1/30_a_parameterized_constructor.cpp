#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex(int, int); // parameterized constructor
    void printnumbeer()
    {
        cout << a << "+" << b << "i" << endl;
    }
};

complex::complex(int x, int y)
{
    a = x;
    b = y;
}

int main()
{
    complex c1(2, 3), c2(5, 7);
    c1.printnumbeer();
    c2.printnumbeer();

    return 0;
}