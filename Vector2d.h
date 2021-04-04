#ifndef VECTOR2D_H
#define VECTOR2D_H
#include "VectorCoordinates.h"
#include "Point.h"
#include "Pointd.h"
#include <iostream>
using namespace std;
class Vector2d : public VectorCoordinates, public Point
{
protected:
    double x, y;

public:
    Vector2d(double x_ = 0.0, double y_ = 0.0) : x(x_), y(y_) {}

    virtual Point getBeginPoint()
    {
        Point a(x, y);
        return a.getPoint(a);
    }
    virtual Pointd getBeginPoin() { return 0; }
    virtual Pointd getEndPoin() { return 0; }
    virtual Point getEndPoint()
    {
        Point a(x, y);
        return a.getPoint(a);
    }

    virtual void print(ostream& ost)const
    {
        cout << " (" << x << ", " << y << ")";
    }
};
#endif