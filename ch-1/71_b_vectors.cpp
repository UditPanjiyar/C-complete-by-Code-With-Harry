#include <iostream>
#include <vector>
using namespace std;

void display(vector<int> &v)
{
    cout << "displaying this vector" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
        // cout<<v.at(i)<<" ";
    }
    cout << endl;
}

int main()
{
    // initializer list
    vector<int> vec = {1, 2, 3, 4, 5};
    display(vec);

    // method
    vector<int> vector2(5, 12);
    display(vector2);

    return 0;
}