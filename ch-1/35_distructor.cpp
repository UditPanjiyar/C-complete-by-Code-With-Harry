#include <iostream>
using namespace std;
int count= 0;
class num
{
    // static int count; // decleration of static variable

public:
    num()
    {
        count++;
        cout << "this is the time when constructor is called for object no. " << count << endl;
    }
    ~num()
    {
        cout << "this is the time when distructor is called for object no. " << count << endl;
        count--;
    }
};

// int num::count;  

int main()
{
    cout << "We are inside our main function" << endl;
    cout << "Creating first object n1" << endl;
    num n1;
    {
        cout << "entering this block " << endl;
        cout << "creating two more objects " << endl;
        num n2, n3;
        cout << "exiting this block " << endl;
    }
    cout << "back to main" << endl;
    num n4;
    

    return 0;
}