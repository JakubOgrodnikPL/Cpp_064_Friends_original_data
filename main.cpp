#include <iostream>
#include "Friends2.h"
using namespace std;

void judge(Point &poi, Rectangle &rec)
{
    rec.name="NEWNAME";

    if(((poi.x>=rec.x)&&(poi.x<=rec.x+rec.width))&&((poi.y>=rec.y)&&(poi.y<=rec.y+rec.height)))
    cout<<"The point: "<<poi.name<<" is within the rectangle: "<<rec.name;
    else
    cout<<"The point: "<<poi.name<<" is NOT within the rectangle: "<<rec.name;
}

int main()
{
    Point p1("A", 3, 17);
    Rectangle r1("Rectangle",0,0,6,4);
    judge(p1, r1);
    r1.read();
    return 0;
}
