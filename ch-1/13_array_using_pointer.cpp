#include <iostream>
using namespace std;

int main()
{
    int marks[] = {4, 5, 6, 7};
    int *ptr = marks;
  
    // cout<<*ptr<<endl;
    // cout<<*ptr++<<endl;
    // cout<<*(++ptr)<<endl;

    // int *ptr = &marks[0];  // it is also working on it "&" is used in c programing

    // cout << "the value of marks [0] is " << *ptr << endl;
    // cout << "the value of marks [1] is " << *(ptr + 1) << endl;
    // cout << "the value of marks [2] is " << *(ptr + 2) << endl;
    // cout << "the value of marks [3] is " << *(ptr + 3) << endl;

    int mathmarks[4];
    // int * ptr;

    for(int i=0; i<4; i++)
    {
        cout<<"enter the mathmarks for "<<i+1<<": ";
        cin>>mathmarks[i];

    }
        for(int i=0; i<4; i++)
    {
            cout<<"the value of marks "<<i+1<<" is "<<mathmarks[i]<<endl;
    }

    int i=0;
    while(i<4)
    {
        cout<<"the value of marks "<<i+1<<" is "<<marks[i]<<endl;
        i++;
    }

    int i = 0;
    do
    {
        cout << "the value of marks " << i + 1 << " is " << marks[i] << endl;
        i++;
    } while (i < 4);

    return 0;
}