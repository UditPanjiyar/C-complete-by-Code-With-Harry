# include <iostream>
using namespace std;

struct employee
{
    /* data */
    int eid;
    float salary ;
    char favchar ;
};

int main()
{
     struct employee harry;
     struct employee udit;

     harry.eid = 1;
     harry.favchar = 'c';
     harry.salary = 100.5;

    cout<<"the salary of harry is "<<harry.salary<<endl;
    cout<<"harry eid is "<<harry.eid<<endl;
    cout<<"favourite chracter of harry is "<<harry.favchar<<endl;




    return 0;
}

//  use of "typedef" and writing the same above program 


# include <iostream>
using namespace std;

typedef struct employee
{
    /* data */
    int eid;
    float salary ;
    char favchar ;
}ep;

// union money
// {
//     int rice;
//     char car;
//     float pounds;

// };


int main()
{

    // enum food{breakfast, lunch, dinner};

    // cout<<breakfast<<endl;
    // cout<<lunch<<endl;
    // cout<<dinner<<endl;

    // cout<<endl;

    // food f1 = breakfast;
    // cout<<f1;


    //  union money m1;
    //  m1.rice = 40;
    //  m1.car = 't';
    //  cout<<m1.rice<<endl;
    // cout<<m1.car;
     
     
     ep  harry;
     ep  udit;

     harry.eid = 1;
     harry.favchar = 'c';
     harry.salary = 100.5;

    
    cout<<"the salary of harry is "<<harry.salary<<endl;
    cout<<"harry eid is "<<harry.eid<<endl;
    cout<<"favourite chracter of harry is "<<harry.favchar<<endl;




    return 0;
}