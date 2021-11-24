#include "../include/Figura.h"
#include "string"

static double PI = 3.14;

using namespace std;

Circle::Circle(double r) {
    promien = r;
}

double Circle::getArea() {
   return promien*promien*PI;
}

Rectangle::Rectangle(double A, double B) {
    bokA = A;
    bokB = B;
}

double Rectangle::getArea() {
    return bokA*bokB;
}