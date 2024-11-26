#include <iostream>
#include "rectangle.h"
using namespace std;

void check (Rectangle plot1, Rectangle plot2)
{
    int area1 = plot1.findArea();
    int area2 = plot2.findArea();

    if(area1 > area2)
    {
        cout << "Plot 1 is larger with an area of " << area1 << " sq.ft." << endl;
    }
    else if(area2 > area1)
    {
        cout << "Plot 2 is larger with an area of " << area2 << " sq.ft." << endl;
    }
    else
    {
        cout << "Both plots are equal in area (" << area1 << " sq.ft.)." << endl;
    }
}
