/*
Syntax for initialization list in constructor:
constructor (argument-list) : initilization-section
{
    assignment + other code;
}
*/

# include <iostream>
using namespace std;
class test
{
    int a;
    int b;
    public:
    // test(int i, int j): a(i), b(j)
    // test(int i, int j): a(i), b(j+i)
    // test(int i, int j): a(i), b(j+a)  //    b(j+a)  =>  b=j+a;
    // test(int i, int j): b(j), a(i+b)   // not correct because a is declared first in line 13
    test(int i, int j): a(i+j), b(j)
    {
        
        cout<<"value of a is "<<a<<endl;
        cout<<"value of b is "<<b<<endl;
    }
};
int main()
{
    test t1(5,8);

    return 0;
}