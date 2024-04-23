#include <iostream>
using namespace std;
class complex
{
    int real, imaginary;

public:
    void setdata(int x, int y)
    {
        real = x;
        imaginary = y;
    }

    void getdata()
    {
        cout << "real part is " << real << endl;
        cout << "imaginary part is " << imaginary << endl;
    }
};
int main()
{


    // complex c1;
    // c1.setdata(4,5);
    // c1.getdata();

    complex *ptr;
    // ptr = &c1;       // pointer to object

    (*ptr).setdata(2,4);
    (*ptr).getdata();

    /*  this can also declare using arrow operator as shown below */

    // ptr->setdata(6, 8);
    // ptr->getdata(); 

    // complex* ptr1 = new complex;         // pointer to object dynamically
    // complex* ptr1;                       // this will not give any value
    // (*ptr1).setdata(1, 2);
    // ptr1->getdata();

    // array of object
    
    // complex *ptr1 = new complex[3];                    // pointer to (array of object) dynamically 
    // cout << "the value of ptr1: " << ptr1 << endl;

    // ptr1->setdata(5, 10);
    // ptr1->getdata();
    // ptr1++;
    // cout << "the value of ptr1: " << ptr1 << endl;

    return 0;
}