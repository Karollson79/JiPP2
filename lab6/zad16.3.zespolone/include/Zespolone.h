//
// Created by papasmerf on 12.11.2021.
//

#ifndef JIPP2_HOME_COMPLEXNUMBER_H
#define JIPP2_HOME_COMPLEXNUMBER_H

#include "iostream"

using namespace std;

class ComplexNumber{
private:
    int a, b;

public:
    ComplexNumber();
    ComplexNumber(int, int);

    void print();

    ComplexNumber operator+(const ComplexNumber &rhs) const;
    ComplexNumber &operator+=(const ComplexNumber &rhs);

    ComplexNumber operator-(const ComplexNumber &rhs) const;
    ComplexNumber &operator-=(const ComplexNumber &rhs);

    ComplexNumber operator*(const ComplexNumber &rhs) const;
    ComplexNumber &operator*=(const ComplexNumber &rhs);

    ComplexNumber operator/(const ComplexNumber &rhs) const;
    ComplexNumber &operator/=(const ComplexNumber &rhs);
};

#endif //JIPP2_HOME_COMPLEXNUMBER_H
