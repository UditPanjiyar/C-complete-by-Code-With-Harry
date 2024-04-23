#include <iostream>
using namespace std;

class base
{
    int data1;

public:
    int data2;
    void setdata()
    {
        data1 = 10;
        data2 = 20;
    }
    int getdata1()
    {
        return data1;
    }
    int getdata2()
    {
        return data2;
    }
};
class derived : private base
{
    int data3;

public:
    void process()
    {
        setdata();

        data3 = getdata1() * data2;
    }
    void display()
    {
        cout << "value of data1 " << getdata1() << endl;
        cout << "value of data " << data2 << endl;
        cout << "value of data " << data3 << endl;
    }
};
int main()
{
    derived d1;
    d1.process();
    d1.display();

    return 0;
}