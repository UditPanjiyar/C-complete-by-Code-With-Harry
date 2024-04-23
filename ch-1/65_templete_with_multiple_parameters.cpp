// syntax for multiple parameters passing through templets
/*
templete<class T1,class T2>
class a1
{
    //body
};

*/

#include <iostream>
using namespace std;

template<class T1, class T2>
class A1
{
public:
    T1 data1;
    T2 data2;
    A1(T1 x, T2 y)
    {
        data1 = x;
        data2 = y;
    }
    void display()
    {
        cout << this->data1 << endl;
        cout << this->data2<<endl;
    }
};

int main()
{
    A1<int,char> obj(10,'u');
    obj.display();

    A1<int,float> obj2(10,0.5);
    obj2.display();

    return 0;
}