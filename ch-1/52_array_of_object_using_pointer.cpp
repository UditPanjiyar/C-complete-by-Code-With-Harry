#include <iostream>
using namespace std;

class shopItem
{
    int id;
    float price;

public:
    void setdata(int x, float y)
    {
        id = x;
        price = y;
    }
    void getdata()
    {
        cout << "id of this item is "<< id << endl;
        cout << "price of this item is "<< price << endl;
    }
};

int main()
{
    int id;
    float price;
    int size = 3 ;
    shopItem *ptr = new shopItem[size];

    shopItem* ptrTemp = ptr;  //   1   2   3    4
                             //    |   |   |    |
                             //    |   |   |    |
                             //    ptrTemp      |(ptr)                                        
    for (int i = 0; i < size; i++)
    {
        cout << "enter item ID and PRICE of item: " <<i+1<<endl;
        cin >>id>>price;
        ptr->setdata(id, price);
        ptr++;
    }

       for (int i = 0; i < size; i++)
    {
        cout<< "for item no: "<<i+1<<endl;
        // (*ptr).getdata();
        ptrTemp->getdata();
        ptrTemp++;
    }

    return 0;
}