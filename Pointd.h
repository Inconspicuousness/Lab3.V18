#ifndef POINTD_H
#define POINTD_H
#include <iostream>
using namespace std;

class Pointd
{
private:
    double x, y, z;

public:

    Pointd(double x_ = 0.0, double y_ = 0.0, double z_ = 0.0) : x(x_), y(y_), z(z_) {}
    Pointd getPointd(Pointd& a)
    {
        x = a.x;
        y = a.y;
        z = a.z;
        return a;
    }

    friend ostream& operator<< (ostream& out, const Pointd& v);
};


#endif