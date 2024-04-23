// this is a pointer points to the object which calls the member function.

// when to use this keyword
// 1.) name conflict between local variable and instance member variable then use this keyword.
// 2.) whenever it is required to represent current object in instance member variable

#include <iostream>
using namespace std;

class coding
{
    int a;                          // a here is instance member variable

public:
    void setdata(int a)             //-> a here is local variable
    {
        this->a = a;                // name conflict between local variable and instance member variable
                                    //  then use this keyword
    }
    void getdata()
    {
        cout << "the value of a is " << a << endl;
    }
};
int main()
{
    coding c1;
    c1.setdata(5);
    c1.getdata();

    return 0;
}

