#include <iostream>
using namespace std;

class employee
{
private:
    int a, b, c;

public:
    int d, e;
    void set_data(int a1, int b1, int c1);
    void get_data()
    {
        cout << "value of a = " << a << endl;
        cout << "value of b = " << b << endl;
        cout << "value of c = " << c << endl;
        cout << "value of d = " << d << endl;
        cout << "value of e = " << e << endl;
    }
};

void employee :: set_data(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    employee e1, e2;
    e1.d = 10;
    e1.e = 20;
    e1.set_data(30, 50, 50);
    e1.get_data();

    return 0;
}