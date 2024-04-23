#include <iostream>
using namespace std;

// template <class T1, class T2>
// float avg(T1 a, T2 b)
// {
//     float c = float(a + b) / 2;
//     return c;
// }

template<class T>
    void swapp(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    // float a;
    // a = avg(5,6.5);
    // a = avg(5,6);
    // a = avg(4.5, 6.5);
    // cout << a << endl;

    int x = 5, y = 10;
    swapp(x, y);
    cout<<"x="<<x<<endl;
    cout<<"y="<<y<<endl;

    return 0;
}
