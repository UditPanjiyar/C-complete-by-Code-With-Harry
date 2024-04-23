#include <iostream>
using namespace std;
int global = 6;

void sum(int n)
{
    cout << global;
}
int main()
{
    int global = 2;
    global=25;
    cout<<global<<endl;
    cout<<::global; //global variable
// whenever global variable and locala variable is made up of same name then
// always precidence is given to local variable  
// :: (scope resolution operators)
    return 0;
}
