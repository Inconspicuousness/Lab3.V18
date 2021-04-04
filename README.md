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



int main()
{
    setlocale(LC_ALL, "Russian");

    Vector2d ab1(1, 2), ab2(34.5, 100), cd1(11.5, 19.3), cd2(19.5, 20.3);
    Vector3d ef1(4, 50, 5), ef2(1, 34, 23.09), gh1(0.02, 13, 82.1), gh2(213.2, 3, 8.12);

    VectorCoordinates* vectorcoordinates[] = { &ab1, &ab2, &cd1, &cd2 };
    cout << "Начало вектора ab: " << vectorcoordinates[0]->getBeginPoint() << '\n';
    cout << "Конец вектора ab: " << vectorcoordinates[1]->getEndPoint() << '\n';
    cout << "Начало вектора cd: " << vectorcoordinates[2]->getBeginPoint() << '\n';
    cout << "Конец вектора cd: " << vectorcoordinates[3]->getEndPoint() << '\n';

    VectorCoordinates* vectorcoordinate[] = { &ef1, &ef2, &gh1, &gh2 };
    cout << '\n' << "Начало вектора ef: " << vectorcoordinate[0]->getBeginPoin() << '\n';
    cout << "Конец вектора ef: " << vectorcoordinate[1]->getEndPoin() << '\n';
    cout << "Начало вектора gh: " << vectorcoordinate[2]->getBeginPoin() << '\n';
    cout << "Конец вектора gh: " << vectorcoordinate[3]->getEndPoin() << '\n';

}
