#ifndef VECTORCOORDINATES_H
#define VECTORCOORDINATES_H
#include <iostream>
using namespace std;

class Point
{
private:
    double x, y;

public:

    Point(double x_ = 0.0, double y_ = 0.0) : x(x_), y(y_) {}
    Point getPoint(Point& a)
    {
        x = a.x;
        y = a.y;
        return a;
    }
    friend ostream& operator<< (ostream& out, const Point& v)
    {
        out << " (" << v.x << ", " << v.y << ")";
        return out;
    }
};


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
    friend ostream& operator<< (ostream& out, const Pointd& v)
    {
        out << " (" << v.x << ", " << v.y << ", " << v.z << ")";
        return out;
    }
};

class VectorCoordinates
{
public:
    virtual Point getBeginPoint() = 0;
    virtual Pointd getBeginPoin() = 0;
    virtual Point getEndPoint() = 0;
    virtual Pointd getEndPoin() = 0;
    virtual void print(ostream& ost)const = 0;
    virtual ~VectorCoordinates() {}
};


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
