#include "string"

using namespace std;

#ifndef FIGURA_FIGURA_H
#define FIGURA_FIGURA_H

class Figura{
public:
    virtual double getArea() = 0;
};

class Circle : public Figura{
protected:
    double promien;
public:
    Circle(double r);
    virtual double getArea();
};

class Rectangle : public Figura{
protected:
    double bokA, bokB;
public:
    Rectangle(double A, double B);
    virtual double getArea();
};
#endif //FIGURA_FIGURA_H
