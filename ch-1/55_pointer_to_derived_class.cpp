#include <iostream>
using namespace std;

class base
{
public:
    int var_base;
    void display()
    {
        cout << "1 displaying base class variabe var_base " << var_base << endl;
    }
};

class derived : public base
{
public:
    int var_derived;
    void display()
    {
        cout << "2 displaying base class variabe var_base " << var_base << endl;
        cout << "2 displaying derived class variabe var_derived " << var_derived << endl;
    }
};
int main()
{
    // base *ptr_base;                             // baseclass pointer
    // base obj_base;                           // base class object

    derived obj_derived;                        // derived class object

    // ptr_base = &obj_derived;                    // base class pointer pointing to derived class object

    // ptr_base->var_base = 35;                    // (*ptr_base).var_base = 35;

    // ptr_base->var_derived =40;               // using base class pointer we can't access derived class data member and function

    // ptr_base->display();                     // base class display function called

    derived *ptr_derived;
    ptr_derived = &obj_derived; // derived class pointer pointing to derived class object

    ptr_derived->var_base = 40;
    ptr_derived->var_derived = 50;
    ptr_derived->display();             // derived class display function called

    return 0;
}