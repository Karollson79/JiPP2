//
// Created by papasmerf on 17.11.2021.
//
#include "../include/Triangle.h"
#include "string"
#include "iostream"
using namespace std;

Triangle::Triangle():a({0,0}), b({0,0}), c({0,0}), nazwa_trojkata("nazwa") {}
Triangle::Triangle(Node a, Node b, Node c, string nazwa):a(a), b(b), c(c), nazwa_trojkata(nazwa) {}

void Triangle::display() {
    cout << "Nazwa trojkata: " << nazwa_trojkata << endl;
    cout << "p1: " ; a.display();
    cout << "p2: " ; b.display();
    cout << "p3: " ; c.display();
}

double Triangle::distance(int firstPointIndex, int secondPointIndex) {
    if(firstPointIndex == 0 || secondPointIndex == 0){
        if(firstPointIndex == 1 || secondPointIndex == 1)
            return pointsDistance(a, b);
        else
            return pointsDistance(a, c);
    }else
        return pointsDistance(b, c);
}

std::ostream &operator<<(std::ostream &lhs, const Triangle &rhs){
    return lhs << "Nazwa trojkata: " << rhs.nazwa_trojkata << endl << "p1: " << rhs.a << endl <<"p2: " << rhs.b << endl << "p3: " << rhs.c << endl;
}

void showTriangleData(Triangle triangle){
    triangle.display();
}

void showTriangleData(Triangle &triangle){
    triangle.display();
}

void showTriangleData(Triangle *triangle){
    triangle->display();
}