#ifndef POINT_H
#define POINT_H
#include <iostream>
using namespace std;

class Point
{
protected:
    double x, y;

public:
    Point(double x_ = 0.0, double y_ = 0.0) : x(x_), y(y_) {}
    Point getPoint(Point& a)
    {
        x = a.x;
        y = a.y;
        return a;
    }

    friend ostream& operator<< (ostream& out, const Point& v);
};

#endif
