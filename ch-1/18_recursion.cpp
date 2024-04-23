#include <iostream>
using namespace std;

int fib(int n)
{
    if(n==1)
    {
        return 0;
    }
    if(n==3 || n==2)
    {
        return 1;
    }
    else{
    n =  fib(n-1) + fib(n-2);
    }
    return n;
}

int factorial(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    n = n * factorial(n - 1);
    return n;
}


int main()
{
    int num;
    cout << "enter the value of num: " << endl;
    cin >> num;
    factorial(num);
    cout << "the value of factorial " << num << " is: " << factorial(num);

    // cout<<"enter the term which you want in fibonaci series: "<<endl;
    // cin>>num;
    // fib(num);
    // cout<<"the term in fibonacci series at position "<<num<<" is: "<<fib(num);

    return 0;
}
