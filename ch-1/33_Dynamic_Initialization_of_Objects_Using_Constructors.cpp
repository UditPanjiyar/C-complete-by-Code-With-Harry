#include <iostream>
using namespace std;
class bankDeposit
{
    int principal;
    int year;
    float rate;
    float returnvalue;

public:
    bankDeposit() {}
    bankDeposit(int p, int y, float r); // r can be a value like 0.04
    bankDeposit(int p, int y, int R);

    void show()
    {
        cout << "principal amount was: " << principal << " and returnvalue after "
             << year << " years is " << returnvalue << endl;
    }
};

bankDeposit::bankDeposit(int p, int y, float r)
{

    principal = p;
    year = y;
    rate = r;
    returnvalue = principal;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + rate);
    }
}

bankDeposit::bankDeposit(int p, int y, int R)
{
    principal = p;
    year = y;
    rate = (float)R / 100;
    returnvalue = principal;
    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + rate);
    }
}

int main()
{
    bankDeposit bd1, bd2, bd3;
    int p, y;
    float r;
    int R;

    cout << "enter p, y and r" << endl;
    cin >> p >> y >> r;
    bd1 = bankDeposit(p, y, r);
    bd1.show();

    cout << "enter p, y and R" << endl;
    cin >> p >> y >> R;
    bd2 = bankDeposit(p, y, R);
    bd2.show();

    return 0;
}
