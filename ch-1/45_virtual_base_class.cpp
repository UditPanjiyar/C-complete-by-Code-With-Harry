#include <iostream>
using namespace std;

class student
{
protected:
    int roll_number;

public:
    void set_roll_number(int R)
    {
        roll_number = R;
    }
    void print_roll_number()
    {
        cout << "your roll no. is: " << roll_number << endl;
    }
};

class test : virtual public student
{
protected:
    float maths, physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void print_marks()
    {
        cout << "marks obtained in maths: "
             << maths <<endl<< "physics: "
             << physics << endl;
    }
};

class sports : virtual public student
{
protected:
    int score;

public:
    void set_score(int sc)
    {
        score = sc;
    }
    void print_score()
    {
        cout << "your score in sports is: " << score << endl;
    }
};

class result : public test, public sports
{
    float total;

public:
    void display_result()
    {
        total = maths + physics + score;
        print_roll_number();
        print_marks();
        print_score();
        cout << "your total score in maths , physics and in sports is: " << total
         << " out of 300"<<endl;
    }
};

int main()
{
    result harry;
    harry.set_roll_number(60);
    harry.set_marks(85.5,90.00);
    harry.set_score(96);
    harry.display_result();


    return 0;
}