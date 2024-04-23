# include <iostream>
using namespace std;

class base
{
    public:
    void print() 
    {
        cout<<"base class called"<<endl;
    }

};

class derived : public base{
    public:
    void print()
    {
        cout<<"derived class called"<<endl;
    }
};
int main()
{
    derived d1, d2;
    d1.print();
    d2.base::print();
    
    return 0;
}