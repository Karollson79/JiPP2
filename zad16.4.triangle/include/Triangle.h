//
// Created by papasmerf on 17.11.2021.
//

#ifndef TRIANGLE_TRIANGLE_H
#define TRIANGLE_TRIANGLE_H
#include "Node.h"
#include "string"

using namespace std;

class Triangle{
    Node a, b, c;
    string nazwa_trojkata;
public:
    Triangle();
    Triangle(Node a, Node b, Node c, string nazwa);
    double distance(int firstPointIndex, int secondPointIndex);
    void display();
    friend std::ostream &operator<<(std::ostream &lhs, const Triangle &rhs);
};

// zadziala tylko wywolanie funkcji w jeden sposob
void showTriangleData(Triangle triangle);
//void showTriangleData(Triangle &triangle);
// w tym przypadku jako argument podajemy adres do obiektu triangle np. &triangle
//void showTriangleData(Triangle *triangle);

std::ostream &operator<<(std::ostream &lhs, const Triangle &rhs);
#endif //TRIANGLE_TRIANGLE_H
