//
// Created by cinamon on 16.11.2021.
//

#include "../include/wektor.h"
#include "math.h"
#include "iostream"

using namespace std;

Vector::Vector(): x(0), y(0) {}

Vector::Vector(double x, double y) : x(x), y(y) {}

double Vector::length() {
    return sqrt(x * x + y * y);
}

void Vector::print() {
    cout << "x = " << this->x;
    cout << "\ny = " << this->y;
    cout << "\n";
}

ostream &operator<<(ostream &lhs, const Vector &rhs){
    return lhs << "[" << rhs.x << ", " << rhs.y << "]";
}

Vector Vector::operator+(const Vector &rhs) const {
    return {x+rhs.x, y+rhs.y};
}

Vector &Vector::operator+=(const Vector &rhs) {
    this->x = this->x + rhs.x;
    this->y = this->y + rhs.y;
    return *this;
}

Vector Vector::operator~() const {
    return{-this->x, -this->y};
}

Vector Vector::operator-(const Vector &rhs) const {
    return {x - rhs.x, y - rhs.y};
}

Vector & Vector::operator-=(const Vector &rhs) {
    this->x = this->x - rhs.x;
    this->y = this->y - rhs.y;
    return *this;
}

Vector Vector::operator^(const Vector &a) const {
    return {x*a.x, y*a.y};
}

Vector & Vector::operator^=(const Vector &a) {
    this->x = this->x * a.x;
    this->y = this->y * a.y;
    return *this;
}

Vector Vector::operator*(const double &a) const {
    return {a * x, a * y};
}

Vector & Vector::operator*=(const double &a) {
    this->x = this->x * a;
    this->y = this->y * a;
    return *this;
}

Vector operator*(const double &lhs, const Vector &rhs){
    return {rhs.x*lhs, rhs.y*lhs};
}

bool Vector::operator==(const Vector &rhs) const {
    return (x == rhs.x && y == rhs.y);
}
