//
// Created by papasmerf on 12.11.2021.
//

#include "../include/Zespolone.h"
#include "iostream"

using namespace std;

ComplexNumber::ComplexNumber() : a(0), b(0){}

ComplexNumber::ComplexNumber(int aa, int bb): a(aa), b(bb){}

void ComplexNumber::print() {
    cout << a;
    if (b > 0){
        cout << " + " <<  b << "i" << endl;
    }else
        cout << " - " << -b << "i" << endl;
}

ComplexNumber ComplexNumber::operator+(const ComplexNumber &rhs) const {
    return{a + rhs.a, b + rhs.b};
}

ComplexNumber & ComplexNumber::operator+=(const ComplexNumber &rhs) {
    this->a = this->a + rhs.a;
    this->b = this->b + rhs.b;
    return *this;
}

ComplexNumber ComplexNumber::operator-(const ComplexNumber &rhs) const {
    return{a - rhs.a, b - rhs.b};
}

ComplexNumber & ComplexNumber::operator-=(const ComplexNumber &rhs) {
    this->a = this->a - rhs.a;
    this->b = this->b - rhs.b;
    return *this;
}

ComplexNumber ComplexNumber::operator*(const ComplexNumber &rhs) const {
    return{a * rhs.a, b * rhs.b};
}

ComplexNumber & ComplexNumber::operator*=(const ComplexNumber &rhs) {
    this->a = this->a * rhs.a;
    this->b = this->b * rhs.b;
    return *this;
}

ComplexNumber ComplexNumber::operator/(const ComplexNumber &rhs) const {
    return{a / rhs.a, b / rhs.b};
}

ComplexNumber & ComplexNumber::operator/=(const ComplexNumber &rhs) {
    this->a = this->a / rhs.a;
    this->b = this->b / rhs.b;
    return *this;
}
