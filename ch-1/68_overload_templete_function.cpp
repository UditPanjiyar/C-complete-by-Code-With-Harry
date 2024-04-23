#include <iostream>
using namespace std;

template <class T>
void func(T a)
{
    cout<<"I am templatised func() "<<a<<endl;
}

void func(int a)
{
    cout << "I am first func() " << a << endl;
}


int main()
{
    func(4);  //Exact match takes the highest priority
    func('c');

    return 0;
}