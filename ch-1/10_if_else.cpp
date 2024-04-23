#include <iostream>
using namespace std;
int main()
{
//   selection control structure--- if- else ladder
    int age;
    cout << "tell me your age: ";
    cin >> age;
    if (age < 18 && age > 0)
    {
        cout << "you are not invited in party";
    }
    else if (age == 18)
    {
        cout << "you are invited but not allow to drink";
    }
    else
    {
        cout << "you are invited";
    }

    return 0;
}