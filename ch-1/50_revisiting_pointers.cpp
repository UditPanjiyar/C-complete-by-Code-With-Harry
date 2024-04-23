# include <iostream>
using namespace std;

int main()
{
    int *ptr = new int(40);  // dynamically meamory inetialization
    cout<<"the value at address p is: "<<(*ptr)<<endl;
    cout<<"the  address of p is: "<<(ptr)<<endl;
    
    // int marks[3];
    // int *arr;
    // arr = &marks[0];

   int * arr = new int[3]; // arr[3]
   arr[0]= 10;
   arr[1]= 20;
   arr[2]= 30;
//    delete[] arr;
   cout<<"the value of arr[0] is "<<arr[0]<<endl;
   cout<<"the value of arr[1] is "<<arr[1]<<endl;
   cout<<"the value of arr[2] is "<<arr[2]<<endl;
   cout<<"the address of arr[0] is "<<&arr[0]<<endl;
   cout<<"the address of arr[1] is "<<&arr[1]<<endl;
   cout<<"the address of arr[2] is "<<&arr[2]<<endl;
   
   arr = new int[4]; 
   arr[3]= 40;
   cout<<"the value of arr[3] is "<<arr[3]<<endl;
   cout<<"the address of arr[3] is "<<&arr[3]<<endl;

    return 0;
} 