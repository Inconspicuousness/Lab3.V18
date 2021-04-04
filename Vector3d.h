#ifndef VECTOR3D_H
#define VECTOR3D_H
#include "VectorCoordinates.h"
#include "Point.h"
#include "Pointd.h"
#include <iostream>
using namespace std;
class Vector3d : public VectorCoordinates
{
protected:
    double x, y, z;

public:
    Vector3d(double x_ = 0.0, double y_ = 0.0, double z_ = 0.0) : x(x_), y(y_), z(z_) {}

    virtual Pointd getBeginPoin()
    {
        Pointd a(x, y, z);
        return a.getPointd(a);
    }
    virtual Point getBeginPoint() { return 0; }
    virtual Point getEndPoint() { return 0; }
    virtual Pointd getEndPoin()
    {
        Pointd a(x, y, z);
        return a.getPointd(a);
    }
    virtual void print(ostream& ost)const
    {
        cout << " (" << x << ", " << y << ", " << z << ")";
    }
};
#endif