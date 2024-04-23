#include <iostream>
using namespace std;

class student
{
protected:
    int roll_number;

public:
    void set_roll_number(int roll)
    {
        roll_number = roll;
    }
    void get_roll_number()
    {
        cout << "your roll number is  " << roll_number << endl;
    }
};

class exam : public student
{
protected:
    float maths;
    float physics;

public:
    
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }

    void get_marks()
    {
        cout << "marks obtained in  maths: " << maths << endl;
        cout << "marks obtained in  physics: " << physics << endl;
    }
};

class result : public exam
{
    float percentage;

public:
    void display_result()
    {
        get_roll_number();
        get_marks();
        cout <<"total percentage "<<(maths + physics)/2<<endl;
    }
};


int main()
{
    result harry,rohan;
    harry.set_roll_number(60);
    harry.set_marks(98,83);
    harry.display_result();
    

    return 0;
}