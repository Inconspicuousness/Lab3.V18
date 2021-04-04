#include "Pointd.h"
#include <iostream>
using namespace std;

ostream& operator<< (ostream& out, const Pointd& v)
{
    out << " (" << v.x << ", " << v.y << ", " << v.z << ")";
    return out;
}
