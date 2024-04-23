#include <iostream>
#include <string.h>
using namespace std;

class CWH
{
protected:
    string title;
    float rating;

public:
    CWH(string t, float r)
    {
        title = t;
        rating = r;
    }
    virtual void display()
    {
    }
};

class CwhVedio : public CWH
{
    float vedio_length;

public:
    CwhVedio(string t, float r, float vl) : CWH(t, r)
    {
        vedio_length = vl;
    }
    void display()
    {
        cout << "This is an amazing video with title " << title << endl;
        cout << "Ratings: " << rating << " out of 5 stars" << endl;
        cout << "Length of this video is: " << vedio_length << " minutes" << endl;
    }
};

class cwhtext : public CWH
{
    int words;

public:
    cwhtext(string s, float r, int w) : CWH(s, r)
    {
        words = w;
    }
    void display()
    {
        cout << "This is an amazing text tutorial with title " << title << endl;
        cout << "Ratings: " << rating << " out of 5 stars" << endl;
        cout << "No of words in this text tutorial is: " << words << " words" << endl;
    }
};

int main()
{
    string title;
    float rating, vediolength;
    int words;

    title = "Cpp Tutorial";
    rating = 4.5;
    vediolength = 28.7;

    CwhVedio c1(title, rating, vediolength);
    // c1.display();

    title = "Cpp Tutorial Text";
    words = 369;
    rating = 4.2;

    cwhtext c2(title, rating, words);
    // c2.display();

    CWH *ptr[2];

    ptr[0] = &c1;       // base class pointer pointing to derived class object
    ptr[1] = &c2;       // base class pointer pointing to derived class object

    ptr[0]->display();
    ptr[1]->display();



    return 0;
}