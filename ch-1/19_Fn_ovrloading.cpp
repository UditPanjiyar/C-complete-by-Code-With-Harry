#include <iostream>
using namespace std;

int sum(int a, int b)
{
    return a + b;
}


int sum(int a, int b, int c)
{
    return a + b + c;
}

// calculate volume of cylinder

float volume(int r, int h)
{
    return 3.14 * r * r * h;
}

// calculate volume of cube

float volume(int a)
{
    return a * a * a;
}

// calculate volume of rectangular box

float volume(int l, int b, int h)
{
    return l * b * h;
}

int main()
{
    cout<<"the sum of 3 and 6 is "<<sum(3,6)<<endl;
    cout<<"the sum of 3 and 6 and 9 is "<<sum(3,6,9)<<endl;
    cout <<"the volume of cylinder having radius 10 and height 7 is "<<volume(10 , 7)<<endl;
    cout <<"the volume of cube  having side 10 is "<<volume(10)<<endl;
    cout <<"the volume of rectangular box length 10, breadth 5, height 3 is "<<volume(10, 5, 3)<<endl;



    return 0;
}