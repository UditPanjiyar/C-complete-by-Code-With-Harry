#include <iostream>
using namespace std;

class complex
{
    int a, b;

public:
    complex();  // default constructor
    void printnumbeer()
    {
        cout << a << "+" << b << "i" << endl;
    }
};
complex::complex()
{
    a = 10;
    b = 20;
    cout<<"hello world"<<endl;
}

int main()
{
    complex c1,c2,c3;
    c1.printnumbeer();
    c2.printnumbeer();
    c3.printnumbeer();


    return 0;
}