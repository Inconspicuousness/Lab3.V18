#include "VectorCoordinates.h"
#include <iostream>
using namespace std;
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