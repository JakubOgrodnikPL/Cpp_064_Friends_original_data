#include <iostream>

using namespace std;

class Rectangle;

class Point
{
    string name;
    float x,y;

public:
    Point(string="A", float=0, float=0);
    void read();

    friend void judge(Point &poi, Rectangle &rec);
};

class Rectangle
{
    string name;
    float x,y,width,height;

public:
    Rectangle(string="noname", float=0, float=0, float=1, float=1);

    void read();

    friend void judge(Point &poi, Rectangle &rec);

};
