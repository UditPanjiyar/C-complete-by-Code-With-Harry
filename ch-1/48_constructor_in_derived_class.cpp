/*
Case1:
class B: public A{
   // Order of execution of constructor -> first A() then B()
};

Case2:
class A: public B, public C{
    // Order of execution of constructor -> B() then C() and A()
};

Case3:
class A: public B, virtual public C{
    // Order of execution of constructor -> C() then B() and A()
};

*/


#include <iostream>
using namespace std;
class base1
{
    int data1;

public:
    base1(int x)
    {
        data1 = x;
        cout << "base1 class constructor called" << endl;
    }
    void print_data1()
    {
        cout << "the value of data1 is  " << data1 << endl;
    }
};

class base2
{
    int data2;

public:
    base2(int x)
    {
        data2 = x;
        cout << "base2 class constructor called" << endl;
    }
    void print_data2()
    {
        cout << "the value of data2 is  " << data2 << endl;
    }
};

class derived : public base2, public base1
{
    int derived1, derived2;

public:
    derived(int a, int b, int c, int d) : base2(a), base1(b)
    {
        derived1 = c;
        derived2 = d;
        cout << "derived class constructor called " << endl;
    }
    void print_derived()
    {
        cout << "the value of derived1 is: " << derived1 << endl;
        cout << "the value of derived2 is: " << derived2 << endl;
    }
};

int main()
{
    derived d1(1, 2, 3, 4);
    d1.print_data1();
    d1.print_data2();
    d1.print_derived();

    return 0;
}