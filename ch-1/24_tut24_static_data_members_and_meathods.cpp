#include <iostream>
using namespace std;

class employee
{
    int id;
    static int count;

public:
    // int count =0;

    void setdata()
    {
        cout << "enter id: ";
        cin >> id;
        count++;
    }
    void getdata()
    {
        cout << "id of your employee: " << id << " and this is employee no  " << count << endl;
    }

    static void  getcount()
    {
        // cout<<id; // show an error because
        //static member function can only access static datamember & static memberfunction
        cout<<"the value of count is "<<count<<endl;
    }
};

int employee::count; // default value is 0

int main()
{
    employee harry, rohan, lovish;
    harry.setdata();
    harry.getdata();
    harry.getcount();  
    // employee::getcount(); 
    // this is also true

    rohan.setdata();
    rohan.getdata();
    rohan.getcount();

    lovish.setdata();
    lovish.getdata();
    lovish.getcount();

    return 0;
}