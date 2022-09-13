#include <iostream>
#include "Friends2.h"
using namespace std;

Point::Point(string n, float xx, float yy)
{
    name=n;
    x=xx;
    y=yy;
}

void Point::read()
{
    cout<<"Give x of the point: " ; cin>>x;
    cout<<"Give y of the point: " ; cin>>y;
    cout<<"Give name of the point: " ; cin>>name;
}

Rectangle::Rectangle(string n, float xx, float yy, float ww, float hh)
{
    name=n;
    x=xx;
    y=yy;
    width=ww;
    height=hh;
}

void Rectangle::read()
{
    /*cout<<"Give x of the bottom left corner: " ; cin>>x;
    cout<<"Give y of the bottom left corner: " ; cin>>y;
    cout<<"Give width of the rectangle: " ; cin>>width;
    cout<<"Give height of the rectangle: " ; cin>>height;
    cout<<"Give name of the rectangle: " ; cin>>name;
    */
    cout<<endl<<"Name of object: "<<name;
}
