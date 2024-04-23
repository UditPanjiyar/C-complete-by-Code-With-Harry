
/*
Create 2 classes:
    1. SimpleCalculator - Takes input of 2 numbers using a utility function and performs +, -, *, /
     and displays the results using another function.

    2. ScientificCalculator - Takes input of 2 numbers using a utility function
       and performs any four scientific operations of your choice
       and displays the results using another function.

    Create another class HybridCalculator and inherit it using these 2 classes:
    Q1. What type of Inheritance are you using?
    Q2. Which mode of Inheritance are you using?
    Q3. Create an object of HybridCalculator and display results of the simple and scientific calculator.
    Q4. How is code reusability implemented?
*/

#include <iostream>
#include <cmath>
using namespace std;
class simple_calculator
{
    int a, b;
    int conditions;

public:
    void setdata_simple()
    {

        cout << "enter the number a and b: " << endl;
        cin >> a >> b;
    }

    void perform_operations_simple()
    {
        cout << "sum of a and b is " << a + b << endl;
        cout << "difference of a and b is " << a - b << endl;
        cout << "product a and b is " << a * b << endl;
        cout << "division of a and b is " << (float)a / b << endl;
    }

    // void operations()
    // {
    //     cout<<"enter 1 for addition"<<endl;
    //     cout<<"enter 2 for substraction"<<endl;
    //     cout<<"enter 3 for multiplication"<<endl;
    //     cout<<"enter 4 for division"<<endl;
    //     cout<<endl;
    //     cout<<"enter conditions for calculation"<<endl;
    //     cin>>conditions;
    //     switch(conditions)
    //     {
    //         case 1:
    //         cout<<"sum of a and b is "<<a+b<<endl;
    //         break;
    //         case 2:
    //         cout<<"difference of a and b is "<<a-b<<endl;
    //         break;
    //         case 3:
    //         cout<<"product a and b is "<<a*b<<endl;
    //         break;
    //         case 4:
    //         cout<<"division of a and b is "<<(float )a/b<<endl;
    //         break;
    //         default:
    //         cout<<"instruction not exist"<<endl;
    //     }
    // }
};

class scientific_calculator
{
    float a, b;

public:
    void setdata_scientific()
    {
        cout << "enter the number a and b: " << endl;
        cin >> a >> b;
    }
    void perform_operations_scientiic()
    {
        cout << "the value of sin(a) is: " << sin(a) << endl;
        cout << "the value of cos(a) is: " << cos(a) << endl;
        cout << "the value of sin(b) is: " << sin(b) << endl;
        cout << "the value of cos(b) is: " << cos(b) << endl;
    }
};

class hybridcalculator : public simple_calculator, public scientific_calculator
{
};

int main()
{
    // simple_calculator s1;
    // scientific_calculator s1;
    // s1.setdata();
    // s1.operations();
    // s1.perform_operations();
    hybridcalculator cal;
    cal.setdata_simple();
    cal.perform_operations_simple();
    cal.setdata_scientific();
    cal.perform_operations_scientiic();

    return 0;
}