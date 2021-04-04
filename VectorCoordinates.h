#ifndef VECTORCOORDINATES_H
#define VECTORCOORDINATES_H
#include "Point.h"
#include "Pointd.h"
#include <iostream>
using namespace std;

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
#endif
