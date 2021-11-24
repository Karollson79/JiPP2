//
// Created by cinamon on 16.11.2021.
//
#include "../include/Node.h"
#include "iostream"
#include "math.h"
using namespace std;

Node::Node() {
    x = 0;
    y = 0;
}

Node::Node(double x, double y): x(x), y(y) {}

void Node::display() const{
    cout << "x: " << x << "\ty: " << y << endl;
}

void Node::updateValue(double x, double y) {
    this->x = x;
    this->y = y;
}

double pointsDistance(Node a, Node b){
    return sqrt((b.x - a.x)*(b.x - a.x) + (b.y - a.y)*(b.y - a.y));
}

std::ostream  &operator<<(std::ostream &lhs, const Node &rhs){
    return lhs << "(" << rhs.x << ", " << rhs.y << ")";
}
