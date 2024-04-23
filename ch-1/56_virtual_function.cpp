#include <iostream>
using namespace std;
class base
{
public:
    int var_base = 10;

    virtual void display()
    {
        cout << "1 displaying base class variable var_base " << var_base << endl;
    }
};
class derived : public base
{
public:
    int var_derived = 20;
    void display()
    {
        cout << "2 displaying base class variabe var_base " << var_base << endl;
        cout << "2 displaying derived class variabe var_derived " << var_derived << endl;
    }
};
int main()
{
    base *ptr_base; // baseclass pointer
    base obj_base;  // base class object

    derived obj_derived; // derived class object

    ptr_base = &obj_derived;
    ptr_base->display();    // base class display call when no use of virtual fun. due to early binding 
                           // else derived class display call 

    /*

        (1.) yaa to tum object create karo aur ek pointer banaio phir
             pointer ko point karado objecr sai like done above

       (2.) direct create pointer using new key word and access
            data maember and member function using arrow operator
            like done below

    */

    base *ptr = new derived(); // base class pointer pointing to derived class dynamically
    ptr->display();

    // base *ptr = new base();
    // ptr->display();

    // derived *d_ptr = new derived();
    // d_ptr->display();

    return 0;
}