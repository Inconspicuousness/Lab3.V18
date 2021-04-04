#include "Point.h"
#include <iostream>
using namespace std;

ostream& operator<< (ostream& out, const Point& v)
{
    out << " (" << v.x << ", " << v.y << ")";
    return out;
}
