# include <iostream>
using namespace std;

int sum(int a, int b)
{
    int c = a+b;
    return c;
}

int main()
{
      int num1, num2;
      cout<<"enter the value of num 1: "<<endl;
      cin>>num1;
      cout<<"enter the value of num 2: "<<endl;
      cin>>num2;
      sum(num1, num2);
      cout<<"the value of sum is "<<sum(num1, num2)<<endl;
    
    return 0;
}