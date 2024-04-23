// deault initalization

#include <iostream>
using namespace std;

template <class T1 = int, class T2 = float, class T3 = char>
class A1
{
public:
    T1 data1;
    T2 data2;
    T3 data3;

    A1(T1 x, T2 y, T3 z)
    {
        data1 = x;
        data2 = y;
        data3 = z;
    }
    void display()
    {
        cout << this->data1 << endl;
        cout << this->data2 << endl;
        cout << this->data3 << endl;
    }
};

int main()
{
    A1<> obj(10,0.5,'u');
    obj.display();
    cout<<endl;

    A1<char, float, int> obj2('c', 1.5, 5);
    obj2.display();

    return 0;
}