# include <iostream>
using namespace std;

void swap(int *x, int *y)
{
    int temp = *x;
    *x = *y;
    *y = temp;
}

// void swap_refrence(int &x, int &y)
// {
//     int temp = x;
//     x = y;
//     y= temp;
// }

int main()
{
    int a=4, b=5;
    cout<<"the value of a is "<<a<<" and b is "<<b<<" before swap "<<endl;
    swap(&a , &b);
    cout<<"the value of a is "<<a<<" and b is "<<b<<" after swap "<<endl;


    // cout<<"the value of a is "<<a<<" and b is "<<b<<" before swap "<<endl;
    // swap_refrence(a , b);
    // cout<<"the value of a is "<<a<<" and b is "<<b<<" after swap "<<endl;

    return 0;
}