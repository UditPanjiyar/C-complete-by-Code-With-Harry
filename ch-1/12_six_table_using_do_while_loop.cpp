#include <iostream>
using namespace std;
int main()
{
    int i = 0;
    cout<<"table of 6 is:"<<endl;

    do
    {
        // cout<<i<<endl;
        cout<<"6X"<<i+1<<" = "<<6*(i+1)<<endl;
        i++;
    } while (i < 10);
    return 0;
}

