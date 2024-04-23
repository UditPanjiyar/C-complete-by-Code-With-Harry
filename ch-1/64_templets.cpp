// #include <iostream>
// using namespace std;

// class vector
// {
// public:
//     int *arr;
//     int size;
//     vector(int m)
//     {
//         size = m;
//         arr = new int[size];
//     }

//     int dotproduct(vector &v)  //(&v) -- v2 kaa refrence pass ho raha hai
//     {
//         int d = 0;
//         for (int i = 0; i < size; i++)
//         {
//             d = d + (this->arr[i] * v.arr[i]); // (arr[i]) v2 kaa hai
//                   //      |
//                 //       \ /
//                 // this represent current directory (this->arr[i]) v1 kaa hai
//         }
//         return d;
//     }
// };

// int main()
// {
//     vector v1(3);
//     v1.arr[0] = 10;
//     v1.arr[1] = 20;
//     v1.arr[2] = 30;

//     vector v2(3);
//     v2.arr[0] = 3;
//     v2.arr[1] = 2;
//     v2.arr[2] = 1;

//     int a = v1.dotproduct(v2);  // v1 is the caller object and v2 is passed as an argument
//     cout << a;

//     // // for float it will not give correct output because arr and other function defined as intigers
//     //  vector v1(3);
//     // v1.arr[0] = 1.5;
//     // v1.arr[1] = 2.5;
//     // v1.arr[2] = 3.5;

//     // vector v2(3);
//     // v2.arr[0] = 3.5;
//     // v2.arr[1] = 2.5;
//     // v2.arr[2] = 1.5;

//     // int a = v1.dotproduct(v2);
//     // cout << a <<endl;
//     // cout<<"correct output is 16.75"<<endl;

//     return 0;
// }

/*    *********************************************************************************************    */

#include <iostream>
using namespace std;
template <class T>
class vector
{
public:
    T *arr;
    int size;
    vector(int m)
    {
        size = m;
        arr = new T[size];
    }

    T dotproduct(vector v)
    {
        T d = 0;
        for (int i = 0; i < size; i++)
        {
            d = d + (this->arr[i] * v.arr[i]);
        }
        return d;
    }
};

int main()
{
    vector<float> v1(3);
    v1.arr[0] = 1.5;
    v1.arr[1] = 2.5;
    v1.arr[2] = 3.5;

    vector<float> v2(3);
    v2.arr[0] = 3.5;
    v2.arr[1] = 2.5;
    v2.arr[2] = 1.5;

    float a = v1.dotproduct(v2);
    cout << a;

    delete[] v1.arr;
    delete[] v2.arr;
    return 0;
}
