// multiple inheritance

#include <iostream>
using namespace std;

class base1
{
public:
    void greet()
    {
        cout << "how are you" << endl;
    }
};

class base2
{
public:
    void greet()
    {
        cout << "kaisai hoo aap" << endl;
    }
};
class derived : public base1, public base2
{
    int a;
    public:
    void greet() // removing ambiguous problem
    {
        base1::greet();
    }

};

int main()
{
    base1 obj1;
    base2 obj2;

    obj1.greet();
    obj2.greet();

    derived d1;
    d1.greet();

    return 0;
}