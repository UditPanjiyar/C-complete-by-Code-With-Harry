#include <iostream>
using namespace std;
class simple
{
    int a, b, c;

public:
    simple(int x, int y = 4, int z = 7)
    {
        a = x;
        b = y;
        c = z;
    }

    void printdata()
    {
        cout << "the value of a= " << a << ", b = " << b << " & c= " << c << endl;
    }
};
int main()
{
    simple s1(4,5,6), s2(7,8),s3(9);
    s1.printdata();
    s2.printdata();
    s3.printdata();

    return 0;
}