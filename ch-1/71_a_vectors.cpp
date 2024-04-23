#include <iostream>
#include <vector>
using namespace std;

template<class T>
void display(vector<T> &v)
{
    cout<<"displaying this vector"<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
        // cout<<v.at(i)<<" ";
    }
    cout << endl;
}

int main()
{ 
    vector<int> vec1;            //zero length integer vector
    display(vec1);

    // vector<char> vec2(4);       //4-element character vector
    // vec2.push_back('2');
    // display(vec2);
    // cout<<vec2.size();

    // vector<char> vec3(vec2);    //4-element character vector from vec2
    // display(vec3);

    // vector<int> vec4(6,3);            //6-element vector of 3s
    // display(vec4);
    // cout<<vec4.size();


    int element, size;
    cout << "enter size of your vector" << endl;
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "enter element to add to this vector " << endl;
        cin >> element;
        vec1.push_back(element);
    }
    display(vec1);

    // vec1.pop_back();
    // display(vec1);
                                                                    

    vector<int>::iterator iter = vec1.begin();
    // vector<int>::iterator iter = vec1.end();
    vec1.insert(iter,50);
    // vec1.insert(iter + 1, 50);
    // vec1.insert(iter + 1, 5, 50);
    display(vec1);


    return 0;
}