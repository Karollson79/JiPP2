//
// Created by papasmerf on 17.11.2021.
//

#ifndef TRIANGLE_NODE_H
#define TRIANGLE_NODE_H

#include "string"

class Node {
private:
    double x, y;

public:
    Node();
    Node(double x, double y);

    void display() const;
    friend double pointsDistance(Node, Node);
    void updateValue(double x, double y);

    friend std::ostream &operator<<(std::ostream &lhs, const Node &rhs);
};

std::ostream  &operator<<(std::ostream &lhs, const Node &rhs);
double pointsDistance(Node a, Node b);
#endif //TRIANGLE_NODE_H
