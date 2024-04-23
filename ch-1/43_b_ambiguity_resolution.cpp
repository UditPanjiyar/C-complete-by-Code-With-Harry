# include <iostream>
using namespace std;
class base
{
    public:
    void say()
    {
        cout<<"base class called"<<endl;
    }

};

class derived : public base
{
    public:
    void say()
    {
        cout<<"derived class called "<<endl;
    }

};

int main()
{
    base b1;
    b1.say();

    derived d1,d2;
    d1.say();       // derived class function "say" called
    d2.base::say(); // base class function 'say' called 
    
    return 0;
}