// array of object
// refer 52 file for array of object using pointer

#include <iostream>
using namespace std;

class student
{
    string name;
    int marks;

public:
    void setname()
    {
        cout << "enter name: " << endl;
        cin >> name;
    }
    void setmarks()
    {

        cout << "enter marks: " << endl;
        cin >> marks;
    }
    void display()
    {
        cout << "name: " << name << endl;
        cout << "marks: " << marks << endl;
    }
};

int main()
{
    student s1[10];
    for (int i = 0; i < 4; i++)
    {
        cout << "for student: " << i + 1 << endl;
        s1[i].setname();
        s1[i].setmarks();
    }
    for (int i = 0; i < 4; i++)
    {
        cout << "student :" << i + 1 << endl;
        s1[i].display();
    }

    return 0;
}