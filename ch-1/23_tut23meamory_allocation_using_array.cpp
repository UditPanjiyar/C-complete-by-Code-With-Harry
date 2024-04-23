// counter problem

#include <iostream>
using namespace std;
class shop
{
    int itemid[100];
    int itemprice[100];
    int counter;

public:
    void calculate_counter()
    {
        counter = 0;
    }
    void set_item_details()
    {
        cout << "enter item id for item no. " << counter + 1 << endl;
        cin >> itemid[counter];
        cout << "enter item price " << endl;
        cin >> itemprice[counter];
        counter++;
    }
    void display()
    {
        for (int i = 0; i < counter; i++)
        {

            cout << "item price with item id " << itemid[i] << " is " << itemprice[i] << endl;
        }
    }
};
int main()
{
    shop dukan, dukan2;
    dukan.calculate_counter();
    dukan.set_item_details();
    dukan.set_item_details();
    dukan.set_item_details();
    dukan.display();

    dukan2.calculate_counter();
    dukan2.set_item_details();
    dukan2.set_item_details();
    dukan2.set_item_details();
    dukan2.display();

    return 0;
}

/* ******************************************************************* */

// #include <iostream>
// using namespace std;

// class shop
// {
// private:
//     int item_id[100];
//     int item_price[100];

// public:
//     void set_price();
//     void get_price();
// };

// void shop::set_price()
// {
//     int i;
//     for (i = 0; i < 5; i++)
//     {
//         cout << "enter  id for item no. " << i + 1 << endl;
//         cin >> item_id[i];
//         cout << "enter  price for item no. " << i + 1 << endl;
//         cin >> item_price[i];
//     }
// }

// void shop::get_price()
// {
//     int i;
//     for (i = 0; i < 5; i++)
//     {
//         cout << "item " << i + 1 << " id : " << item_id[i] << endl;
//         cout << "item " << i + 1 << " price : " << item_price[i] << endl;
//         cout << endl;
//     }
// }

// int main()
// {
//     shop s1;
//     s1.set_price();
//     s1.get_price();
//     return 0;
// }