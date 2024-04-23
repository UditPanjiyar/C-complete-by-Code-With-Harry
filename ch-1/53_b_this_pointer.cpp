#include <iostream>
using namespace std;

class item
{
    int a, b;

public:
    void setdata(int x, int y)
    {
        a = x;
        b = y;
    }
    void getdata()
    {
        cout << "a=" << a << "  b=" << b << endl;
    }

    item grater(item obj2)
    {
        if (a + b > obj2.a + obj2.b)
        {
            return *this;
        }
        else
            return obj2;
    }

    // item grater(item obj1, item obj2)
    // {
    //     if(obj1.a+obj1.b > obj2.a+obj2.b)
    //     {
    //         return obj1;
    //     }
    //     else
    //         return obj2;
    // }
};

int main()
{
    item i1, i2, i3;
    i1.setdata(10, 20);
    i2.setdata(8, 20);

    i1.getdata();
    i2.getdata();

    i3 = i1.grater(i2); // i1 is caller object calling grater function in which i2 is passed as an argument
    i3.getdata();       // therefore a & b of i1 can be accessrd directly but to access a & b of i2 we are using
                        //  obj2 .

    // (or)

    // i3 = i3.grater(i1,i2);
    // i3.getdata();

    return 0;
}
