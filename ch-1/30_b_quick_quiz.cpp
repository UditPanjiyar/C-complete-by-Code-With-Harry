// calaulate distance between two points 

#include <iostream>
#include <math.h>
using namespace std;

class point
{
public:
    int a, b;
    point(void){}
    point(int x, int y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << "the point is "<< "(" << a << "," << b << ")" << endl;
    }
    void distance(point p1, point p2)
    {
        float s;
        s = pow(  ( pow( (p1.a - p2.a), 2) + pow( (p1.b - p2.b), 2)  ), 0.5   );
        cout<<"distance between two points is:  "<<s<<endl;
    }
};

int main()
{
    point p1(10, 4), p2(4, 4), p3;
    p1.display();
    p2.display();
    p3.distance(p1,p2);

    return 0;
}