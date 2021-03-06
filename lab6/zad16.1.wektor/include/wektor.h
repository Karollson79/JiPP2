//
// Created by cinamon on 16.11.2021.
//

#ifndef JIPP2_WEKTOR_H
#define JIPP2_WEKTOR_H

#include "string"

class Vector{
private:
    double x, y;

public:
    Vector();
    Vector(double x, double y);
    double length();
    void print();

    friend std::ostream &operator<<(std::ostream &lhs, const Vector &rhs);

    Vector operator+(const Vector &rhs) const;
    Vector  &operator+=(const Vector &rhs);

    Vector operator~()const;  // wektor przeciwny

    Vector operator-(const Vector &rhs) const; // odejmowanie wektorow
    Vector &operator-=(const Vector &rhs);

    Vector operator^(const Vector &rhs) const; // iloczyn skalarny
    Vector &operator^=(const Vector &rhs);

    Vector operator*(const double &a) const; // mnozenie przez skalar
    Vector &operator*=(const double &a);
    friend Vector operator*(const double &lhs, const Vector &rhs);

    bool operator==(const Vector &rhs) const; // porownywanie wektoro

};

Vector operator*(const double &lhs, const Vector &rhs);
std::ostream &operator<<(std::ostream &lhs, const Vector &rhs);
#endif //JIPP2_WEKTOR_H
