#include <iostream>
using namespace std;

class maths
{
    int a, b;

public:
    void setdata(int v1, int v2)
    {
        a = v1;
        b = v2;
    }

    void print()
    {
        cout << a << "+" << b << "i" << endl;
    }
    void setdata_by_sum(maths o1, maths o2)
    {
        a = o1.a + o2.a;
        b = o1.b + o2.b;
    }
};

int main()
{
    maths m1, m2, m3;
    m1.setdata(2, 3);
    m1.print();

    m2.setdata(4, 5);
    m2.print();

    m3.setdata_by_sum(m1, m2);
    m3.print();

    return 0;
}

/* *****************************************************************************  */
