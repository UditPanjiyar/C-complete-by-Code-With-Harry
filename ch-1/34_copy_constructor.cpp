#include <iostream>
using namespace std;
class Number
{
    int a;

public:
    Number()
    {
        a = 0;
    }
    Number(int x)
    {
        a = x;
    }

    // Number(Number &obj)
    // {
    //     cout << "copy constructor called!!!" << endl;
    //     a = obj.a;
    // }

    void display()
    {
        cout << "the number for this object is: " << a << endl;
    }
};
int main()
{
    Number n1, n2(10), n3(25), N2;
    n1.display();
    n2.display();
    n3.display();

    Number N1(n3); // Copy constructor invoked
    N1.display();

    N2 = n2;         // Copy constructor not called
    N2.display();

    Number N3 = n2;     // Copy constructor invoked
    N3.display();

    return 0;
}