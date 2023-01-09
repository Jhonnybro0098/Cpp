#include <iostream>
#include <cstring>
using namespace std;
class YT
{
protected:
    string title;
    float rating;

public:
    YT(string s, float r)
    {
        title = s;
        rating = r;
    }
    virtual void display() {}
};
class YTVideo : public YT
{
    float VideoLength;

public:
    YTVideo(string s, float r, float vl) : YT(s, r)
    {
        VideoLength = vl;
    }
    void display()
    {
        cout << "Video Title : " << title << endl;
        cout << "Ratings : " << rating << " out of 5" << endl;
        cout << "Video Length : " << VideoLength << " minutes " << endl;
    }
};
class YTText : public YT
{
    int words;

public:
    YTText(string s, float r, int wc) : YT(s, r)
    {
        words = wc;
    }
    void display()
    {
        cout << "Number of words in video : " << words << endl;
    }
};

int main()
{
    string title;
    float rating, Vlen;
    int words;
    // For video
    title = "Video Name";
    Vlen = 4.56;
    rating = 4.7;
    YTVideo video(title, rating, Vlen);
    // For text
    words = 4556;
    YTText text(title, rating, words);
    YT *tuts[2];
    tuts[0] = &video;
    tuts[1] = &text;

    tuts[0]->display();
    tuts[1]->display();
    return 0;
}